#include "string.h"
#include "file.h"



/************************************************************************/
/* Các phương thức lớp file                                             */
/************************************************************************/
/*constructor*/		file::file(const std::wstring &fullFileName)
{
	int flagDot = 0;
	this->fileFullName = fullFileName;
	for (int i = 0; i < (int)fullFileName.size(); i++)
	{
		this->fileRealName += fullFileName[i];
		if (fullFileName[i] == L'\\' || fullFileName[i] == L'/')
		{
			flagDot = 0;
			this->fileRealName.clear();
		}
		else if (fullFileName[i] == L'.')
		{
			flagDot = 1;
		}
	}
	if (flagDot == 1)
	{
		for (int i = int(this->fileRealName.size()) - 1; i >= 0; i--)
		{
			if (this->fileRealName[i] == L'.')
			{
				this->fileExtensionName = this->fileRealName.substr(i + 1, this->fileRealName.size());
				this->fileRealName.erase(i, this->fileRealName.size() - 1);
				i = -1;
			}
		}
	}
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ifstream fileInputStream(this->fileFullName, std::ifstream::in | std::ifstream::binary);
#else
	std::ifstream fileInputStream(GetString(this->fileFullName), std::ifstream::in | std::ifstream::binary);
#endif	

	if (fileInputStream.is_open())
	{
		fileInputStream.seekg(0, std::ios_base::end);
		this->fileSize = fileInputStream.tellg();
		fileInputStream.close();
	}
	else this->fileSize = 0;
}
bool				file::Read(std::wstring &buffer)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ifstream fileInputStream(fileFullName, std::ifstream::in | std::ifstream::binary);
#else
	std::ifstream fileInputStream(GetString(fileFullName), std::ifstream::in | std::ifstream::binary);
#endif
	if (fileInputStream.is_open())
	{
		fileInputStream.seekg(0, std::ios_base::end);
		this->fileSize = fileInputStream.tellg();
		fileInputStream.seekg(0, std::ios_base::beg);
		if (this->fileSize <= 4)
		{
			char* utf8data = new char[this->fileSize + 10];
			memset(utf8data, 0, this->fileSize + 10);
			fileInputStream.seekg(0, std::ios_base::beg);
			fileInputStream.read(utf8data, this->fileSize);
			buffer += GetWString(utf8data, fileSize);
			delete[] utf8data;
			fileInputStream.close();
			return true;
		}
		bool		flagValidateToRead = true;
		char		byteOrderMark1 = 0;
		char		byteOrderMark2 = 0;
		char		byteOrderMark3 = 0;
		char		byteOrderMark4 = 0;
		fileInputStream.read(&byteOrderMark1, 1);
		fileInputStream.read(&byteOrderMark2, 1);
		fileInputStream.read(&byteOrderMark3, 1);
		fileInputStream.read(&byteOrderMark4, 1);
		fileInputStream.seekg(0, std::ios_base::beg);
		if (byteOrderMark1 == (char)0xFE && byteOrderMark2 == (char)0xFF)
		{//Unicode Big Endian
			gui::Show(std::wstring(L"Lỗi"), L"Error: Unsupported encode (Unicode Big Endian) with %ls \n", fileFullName.c_str());
			flagValidateToRead = false;
		}
		else if (byteOrderMark1 == (char)0x00 && byteOrderMark2 == (char)0x00 && byteOrderMark3 == (char)0xFE && byteOrderMark4 == (char)0xFF)
		{//UTF-32 Big Endian
			gui::Show(std::wstring(L"Lỗi"), L"Error: Unsupported encode (UTF-32 Big Endian) with %ls \n", fileFullName.c_str());
			flagValidateToRead = false;
		}
		else if (byteOrderMark1 == (char)0xFF && byteOrderMark2 == (char)0xFE && byteOrderMark3 == (char)0x00 && byteOrderMark4 == (char)0x00)
		{//UTF-32 Little Endian
			gui::Show(std::wstring(L"Lỗi"), L"Error: Unsupported encode (UTF-32 Little Endian) with %ls \n", fileFullName.c_str());
			flagValidateToRead = false;
		}
		else if ((byteOrderMark1 == (char)0x2B && byteOrderMark2 == (char)0x2F && byteOrderMark3 == (char)0x76))
		{//UTF-7
			gui::Show(std::wstring(L"Lỗi"), L"Error: Unsupported encode (UTF-7) with %ls \n", fileFullName.c_str());
			flagValidateToRead = false;
		}
		else if (byteOrderMark1 == (char)0xFF && byteOrderMark2 == (char)0xFE)
		{//Unicode Little Endian
			wchar_t*	unicodeData = new wchar_t[this->fileSize * 2 + 10];
			memset(unicodeData, 0, this->fileSize * 2 + 10);
			fileInputStream.seekg(2, std::ios_base::beg);
			fileInputStream.read((char*)unicodeData, this->fileSize);
			buffer += unicodeData;
			delete[] unicodeData;
		}
		else if (byteOrderMark1 == (char)0xEF && byteOrderMark2 == (char)0xBB && byteOrderMark3 == (char)0xBF)
		{//utf8
			char* utf8data = new char[this->fileSize + 10];
			memset(utf8data, 0, this->fileSize + 10);
			fileInputStream.seekg(3, std::ios_base::beg);
			fileInputStream.read(utf8data, this->fileSize);
			buffer += GetWString(utf8data, fileSize);
			delete[] utf8data;
		}
		else
		{//utf-8 without BOM
			char* utf8data = new char[this->fileSize + 10];
			memset(utf8data, 0, this->fileSize + 10);
			fileInputStream.seekg(0, std::ios_base::beg);
			fileInputStream.read(utf8data, this->fileSize);
			buffer += GetWString(utf8data, fileSize);
			delete[] utf8data;
		}
		fileInputStream.close();
		return flagValidateToRead;
	}
	else
	{
		gui::Show(std::wstring(L"Lỗi"), L"Error: Can not open file %ls \n", fileFullName.c_str());
		return false;
	}
}
bool				file::Read(void* buffer, long long int bufferSize)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ifstream fileInputStream(fileFullName, std::ifstream::in | std::ifstream::binary);
#else
	std::ifstream fileInputStream(GetString(fileFullName), std::ifstream::in | std::ifstream::binary);
#endif
	if (fileInputStream.is_open())
	{
		fileInputStream.seekg(0, std::ios_base::end);
		this->fileSize = fileInputStream.tellg();
		fileInputStream.seekg(0, std::ios_base::beg);
		long long int readSize = 0;
		for (long long int i = 0; i < bufferSize; i += 1024)
		{
			if (bufferSize - readSize > 1024) fileInputStream.read((char*)buffer + i, 1024);
			else fileInputStream.read((char*)buffer + i, bufferSize - readSize);
			readSize += fileInputStream.gcount();
		}
		if (readSize != bufferSize)
		{
			gui::Show(L"Cảnh báo", L"Cảnh báo khi đọc file %ls (buffer size == %d bytes, read == %d bytes)\n", this->fileFullName.c_str(), bufferSize, readSize);
			return false;
		}
	}
	else
	{
		gui::Show(std::wstring(L"Lỗi"), L"Error: Can not open file %ls \n", fileFullName.c_str());
		return false;
	}
	return true;
}
bool				file::Write(const std::wstring &buffer, bool truncate)
{
	for (auto i = 0u; i < fileFullName.size(); i++)
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		if (fileFullName[i] == L'\\') ::CreateDirectoryW(fileFullName.substr(0, i).c_str(), 0);
#else
		int mkdir(const char *path, mode_t mode);
		if (fileFullName[i] == L'/') mkdir(GetString(fileFullName.substr(0, i)).c_str(), 0777);
#endif
	}
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ofstream fileHandle(fileFullName, std::ios_base::out | std::ios_base::binary | (truncate ? std::ios_base::trunc : (std::ios_base::app | std::ios_base::ate)));
#else
	std::ofstream fileHandle(GetString(fileFullName), std::ios_base::out | std::ios_base::binary | (truncate ? std::ios_base::trunc : (std::ios_base::app | std::ios_base::ate)));
#endif
	if (fileHandle.is_open())
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		int buffUtf8Size = buffer.size() * 2 + 10;
		char* buffUtf8 = new char[buffUtf8Size];
		WideCharToMultiByte(CP_UTF8, 0, buffer.c_str(), -1, buffUtf8, buffUtf8Size, 0, 0);
		int				writeSize = strlen(buffUtf8);
		long long int	beforeWriteOffset = fileHandle.tellp();
		fileHandle.write(buffUtf8, writeSize);
		long long int	affterWriteOffset = fileHandle.tellp();
		long long int	writtenSize = affterWriteOffset - beforeWriteOffset;
		delete[] buffUtf8;
		fileHandle.close();
#else
		std::string		bufferToWrite = GetString(buffer);
		INT64			writeSize = bufferToWrite.size();
		INT64			beforeWriteOffset = fileHandle.tellp();
		fileHandle.write(bufferToWrite.c_str(), writeSize);
		INT64			affterWriteOffset = fileHandle.tellp();
		INT64			writtenSize = affterWriteOffset - beforeWriteOffset;
		fileHandle.close();
#endif
		if (writtenSize != writeSize)
		{
			gui::Show(std::wstring(L"Lỗi"), L"Error: write file %ls (utf8 size == %d bytes, write == %d bytes)\n", this->fileFullName, writeSize, writtenSize);
			return false;
		}
		else return true;
	}
	else
	{
		gui::Show(std::wstring(L"Lỗi"), L"Error: Can not open to write file %ls \n", this->fileFullName);
		return false;
	}
	return false;
}
bool				file::Write(const void* buffer, long long int bufferSize, bool truncate)
{
	for (auto i = 0u; i < fileFullName.size(); i++)
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		if (fileFullName[i] == L'\\') ::CreateDirectoryW(fileFullName.substr(0, i).c_str(), 0);
#else
		int mkdir(const char *path, mode_t mode);
		if (fileFullName[i] == L'/') mkdir(GetString(fileFullName.substr(0, i)).c_str(), 0777);
#endif
	}
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ofstream fileHandle(fileFullName, std::ios_base::out | std::ios_base::binary | (truncate ? std::ios_base::trunc : (std::ios_base::app | std::ios_base::ate)));
#else
	std::ofstream fileHandle(GetString(fileFullName), std::ios_base::out | std::ios_base::binary | (truncate ? std::ios_base::trunc : (std::ios_base::app | std::ios_base::ate)));
#endif	
	if (fileHandle.is_open())
	{
		long long int	beforeWriteOffset = fileHandle.tellp();
		fileHandle.write((const char*)buffer, bufferSize);
		long long int	affterWriteOffset = fileHandle.tellp();
		long long int	writtenSize = affterWriteOffset - beforeWriteOffset;
		long long int	writeSize = bufferSize;
		fileHandle.close();
		if (writtenSize != writeSize)
		{
			gui::Show(std::wstring(L"Lỗi"), L"Error: write file %ls (buffer size == %d bytes, write == %d bytes)\n", fileFullName.c_str(), writeSize, writtenSize);
			return false;
		}
		else return true;
	}
	else
	{
		gui::Show(std::wstring(L"Lỗi"), L"Error: Can not open to write file %ls \n", fileFullName.c_str());
		return false;
	}
	return false;
}
bool				file::Exist(void)const
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	return (GetFileAttributesW(fileFullName.c_str()) != INVALID_FILE_ATTRIBUTES);
#else
	std::ifstream f(GetString(fileFullName));
	return f.good();
#endif
}
long long int		file::Size(void)const
{
	return fileSize;
}
const std::wstring&	file::Log(const wchar_t* format, ...)
{
	if (format)
	{
		wchar_t buffer[20240 + 1000];
		va_list args;
		va_start(args, format);
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		_vsnwprintf_s(buffer, 20240, format, args);
#else
		vswprintf(buffer, 10240, format, args);
#endif
		va_end(args);
		fileLog += buffer;
	}
	return fileLog;
}
const std::wstring&	file::Log(const std::wstring &wstr)
{
	fileLog += wstr;
	return fileLog;
}
const std::wstring& file::LogWstr(const std::wstring &wstr)
{
	fileLog += wstr;
	return fileLog;
}
void				file::WriteLog(const std::wstring &logFileName, bool truncate)
{
	WriteFile(logFileName, Log(), truncate);
	fileLog.clear();
}
const std::wstring&	file::RealFileName(void)const
{
	return fileRealName;
}
const std::wstring&	file::ExtensionFileName(void)const
{
	return fileExtensionName;
}
/************************************************************************/
/* Các phương thức tĩnh thao tác với file                               */
/************************************************************************/
bool				file::ExistsFile(const std::wstring &fileName)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	return (GetFileAttributesW(fileName.c_str()) != INVALID_FILE_ATTRIBUTES);
#else
	std::ifstream f(GetString(fileName));
	return f.good();
#endif
}
std::wstring		file::ReadFile(const std::wstring &fileName)
{
	std::wstring bufferContent;
	ReadFile(fileName, bufferContent);
	return bufferContent;
}
bool				file::ReadFile(const std::wstring &fileName, std::wstring &buffer)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ifstream fileInputStream(fileName, std::ifstream::in | std::ifstream::binary);
#else
	std::ifstream fileInputStream(GetString(fileName), std::ifstream::in | std::ifstream::binary);
#endif
	if (fileInputStream.is_open())
	{
		fileInputStream.seekg(0, std::ios_base::end);
		long long fileSize = fileInputStream.tellg();
		fileInputStream.seekg(0, std::ios_base::beg);
		if (fileSize <= 4)
		{
			char* utf8data = new char[fileSize + 10];
			memset(utf8data, 0, fileSize + 10);
			fileInputStream.seekg(0, std::ios_base::beg);
			fileInputStream.read(utf8data, fileSize);
			buffer += GetWString(utf8data, fileSize);
			delete[] utf8data;
			fileInputStream.close();
			return true;
		}
		bool		flagValidateToRead = true;
		char		byteOrderMark1 = 0;
		char		byteOrderMark2 = 0;
		char		byteOrderMark3 = 0;
		char		byteOrderMark4 = 0;
		fileInputStream.read(&byteOrderMark1, 1);
		fileInputStream.read(&byteOrderMark2, 1);
		fileInputStream.read(&byteOrderMark3, 1);
		fileInputStream.read(&byteOrderMark4, 1);
		fileInputStream.seekg(0, std::ios_base::beg);
		if (byteOrderMark1 == (char)0xFE && byteOrderMark2 == (char)0xFF)
		{//Unicode Big Endian
			gui::Show(std::wstring(L"Lỗi"), L"Error: Unsupported encode (Unicode Big Endian) with %ls \n", fileName.c_str());
			flagValidateToRead = false;
		}
		else if (byteOrderMark1 == (char)0x00 && byteOrderMark2 == (char)0x00 && byteOrderMark3 == (char)0xFE && byteOrderMark4 == (char)0xFF)
		{//UTF-32 Big Endian
			gui::Show(std::wstring(L"Lỗi"), L"Error: Unsupported encode (UTF-32 Big Endian) with %ls \n", fileName.c_str());
			flagValidateToRead = false;
		}
		else if (byteOrderMark1 == (char)0xFF && byteOrderMark2 == (char)0xFE && byteOrderMark3 == (char)0x00 && byteOrderMark4 == (char)0x00)
		{//UTF-32 Little Endian
			gui::Show(std::wstring(L"Lỗi"), L"Error: Unsupported encode (UTF-32 Little Endian) with %ls \n", fileName.c_str());
			flagValidateToRead = false;
		}
		else if ((byteOrderMark1 == (char)0x2B && byteOrderMark2 == (char)0x2F && byteOrderMark3 == (char)0x76))
		{//UTF-7
			gui::Show(std::wstring(L"Lỗi"), L"Error: Unsupported encode (UTF-7) with %ls \n", fileName.c_str());
			flagValidateToRead = false;
		}
		else if (byteOrderMark1 == (char)0xFF && byteOrderMark2 == (char)0xFE)
		{//Unicode Little Endian
			wchar_t*	unicodeData = new wchar_t[fileSize * 2 + 10];
			memset(unicodeData, 0, fileSize * 2 + 10);
			fileInputStream.seekg(2, std::ios_base::beg);
			fileInputStream.read((char*)unicodeData, fileSize);
			buffer += unicodeData;
			delete[] unicodeData;
		}
		else if (byteOrderMark1 == (char)0xEF && byteOrderMark2 == (char)0xBB && byteOrderMark3 == (char)0xBF)
		{//utf8
			char* utf8data = new char[fileSize + 10];
			memset(utf8data, 0, fileSize + 10);
			fileInputStream.seekg(3, std::ios_base::beg);
			fileInputStream.read(utf8data, fileSize);
			buffer += GetWString(utf8data, fileSize);
			delete[] utf8data;
		}
		else
		{//utf-8 without BOM
			char* utf8data = (char*)calloc(fileSize + 10, sizeof(char));
			if (utf8data)
			{
				fileInputStream.seekg(0, std::ios_base::beg);
				fileInputStream.read(utf8data, fileSize);
				buffer += GetWString(utf8data, fileSize);
				free(utf8data);
			}
			else
			{
				gui::Show(std::wstring(L"Lỗi"), L"Can not malloc to open file %ls \n", fileName.c_str());
			}
		}
		fileInputStream.close();
		return flagValidateToRead;
	}
	else
	{
		gui::Show(std::wstring(L"Lỗi"), L"Error: Can not open file %ls \n", fileName.c_str());
		return false;
	}
}
void				file::ReadFile(const std::wstring &fileName, std::wstringset &bufferLineSet)
{
	Split(file::ReadFile(fileName), bufferLineSet, L'\n');
}
void				file::ReadFile(const std::wstring &fileName, std::wstringlist &bufferLineList)
{
	Split(file::ReadFile(fileName), bufferLineList, L'\n');
}
void				file::ReadFileBinary(const std::wstring &fileName, void* buffer, INT64 buffersize)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ifstream fileInputStream(fileName, std::ifstream::in | std::ifstream::binary);
#else
	std::ifstream fileInputStream(GetString(fileName), std::ifstream::in | std::ifstream::binary);
#endif
	if (fileInputStream.is_open())
	{
		fileInputStream.seekg(0, std::ios_base::end);
		long long int currentFileSize = fileInputStream.tellg();
		memset(buffer, 0, buffersize);
		if (buffersize > currentFileSize) buffersize = currentFileSize;
		fileInputStream.seekg(0, std::ios_base::beg);
		for (int i = 0; i < buffersize; i += 1024)
		{
			int currentStepReadSize = buffersize - i;
			if (currentStepReadSize > 1024) currentStepReadSize = 1024;
			fileInputStream.read((char*)buffer + i, currentStepReadSize);
		}
		fileInputStream.close();
	}
}
bool				file::ReadFileSubSegment(const std::wstring &fileName, void * buffer, long long int offset, long long int length)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ifstream fileInputStream(fileName, std::ifstream::in | std::ifstream::binary);
#else
	std::ifstream fileInputStream(GetString(fileName), std::ifstream::in | std::ifstream::binary);
#endif
	if (fileInputStream.is_open())
	{
		fileInputStream.seekg(0, std::ios_base::end);
		long long int currentFileSize = fileInputStream.tellg();
		memset(buffer, 0, length);

		if (offset > currentFileSize)
		{
			gui::Show(L"Lỗi", L"Lỗi ReadFileSubSegment (offset > currentFileSize) filename=%s,offset=%ld,currentFileSize=%ld", fileName.c_str(), offset, currentFileSize);
		}


		if (offset + length > currentFileSize) length = currentFileSize - offset;
		long long int readSize = 0;
		if (length > 0 && offset < currentFileSize && offset + length <= currentFileSize)
		{
			fileInputStream.seekg(offset, std::ios_base::beg);
			for (int i = 0; i < length; i += 1024)
			{
				long long currentStepReadSize = length - i;
				if (currentStepReadSize > 1024) currentStepReadSize = 1024;
				fileInputStream.read((char*)buffer + i, currentStepReadSize);
				readSize += fileInputStream.gcount();
			}
		}
		fileInputStream.close();
		if (readSize == length) return true;
		else
		{
			gui::Show(L"Lỗi", L"Lỗi ReadFileSubSegment filename=%s,offset=%ld,length=%ld", fileName.c_str(), offset, length);
			return false;
		}

	}
	return false;
}
void				file::ReadFile(const std::wstring &fileName, std::wstringintmap& dataMap)
{
	std::wstringlist dataLineList;
	file::ReadFile(fileName, dataLineList);
	for (auto iLine = dataLineList.begin(); iLine != dataLineList.end(); iLine++)
	{
		std::wstringlist contentList;
		Split(*iLine, contentList, L'\t');
		if (contentList.size() == 2)
		{
			auto iContent = contentList.begin();
			std::wstring fistValue = *iContent;
			iContent++;
			dataMap[fistValue] = GetFirstInt(*iContent);
		}
	}
}
void				file::ReadFileLine(const std::wstring &fileName, std::wstringlist& bufferLineList/*delim is \r and \n*/, bool getEmptyLine /*= false*/)
{
	std::wstring bufferContent;
	file::ReadFile(fileName, bufferContent);
	Split(bufferContent, bufferLineList, L'\n', getEmptyLine);
	bufferContent.clear();
}
void				file::ReadFileSyllable(const std::wstring &fileName, std::wstringlist& bufferSyllableList/*delim is space and \r and \n*/)
{
	std::wstring bufferContent;
	file::ReadFile(fileName, bufferContent);
	Split(bufferContent, bufferSyllableList, L' ');
	bufferContent.clear();
}
void				file::ReadFileSyllable(const std::wstring &fileName, std::wstringset& bufferSyllableSet/*delim is space and \r and \n*/)
{
	std::wstring bufferContent;
	file::ReadFile(fileName, bufferContent);
	Split(bufferContent, bufferSyllableSet, L' ');
	bufferContent.clear();
}
void				file::WriteFile(const std::wstring &fileName, const std::wstring &wstr, bool truncate)
{
	for (auto i = 0u; i < fileName.size(); i++)
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		if (fileName[i] == L'\\') ::CreateDirectoryW(fileName.substr(0, i).c_str(), 0);
#else
		int mkdir(const char *path, mode_t mode);
		if (fileName[i] == L'/') mkdir(GetString(fileName.substr(0, i)).c_str(), 0777);
#endif
	}
	if (truncate) file::DeleteFile(fileName);
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ofstream fileHandle(fileName, std::ios_base::out | std::ios_base::binary | (truncate ? std::ios_base::trunc : (std::ios_base::app | std::ios_base::ate)));
#else
	std::ofstream fileHandle(GetString(fileName), std::ios_base::out | std::ios_base::binary | (truncate ? std::ios_base::trunc : (std::ios_base::app | std::ios_base::ate)));
#endif
	if (fileHandle.is_open())
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		int buffUtf8Size = wstr.size() * 2 + 10;
		char* buffUtf8 = new char[buffUtf8Size];
		memset(buffUtf8, 0, buffUtf8Size);
		WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), wstr.size(), buffUtf8, buffUtf8Size, 0, 0);
		fileHandle.write(buffUtf8, strlen(buffUtf8));
		fileHandle.close();
		delete[] buffUtf8;
#else
		std::string		bufferToWrite = GetString(wstr);
		INT64				writeSize = bufferToWrite.size();
		INT64	beforeWriteOffset = fileHandle.tellp();
		fileHandle.write(bufferToWrite.c_str(), writeSize);
		INT64	affterWriteOffset = fileHandle.tellp();
		INT64	writtenSize = affterWriteOffset - beforeWriteOffset;
		fileHandle.close();
		if (writtenSize != writeSize)
		{
			gui::Show(std::wstring(L"Lỗi"), L"Error: write file %ls (utf8 size == %d bytes, write == %d bytes)\n", fileName.c_str(), writeSize, writtenSize);
			//return false;
		}
		//else return true;
#endif		
	}
	else
	{
		gui::Show(std::wstring(L"Lỗi"), L"Error: Can not open to write file %ls \n", fileName.c_str());
	}
}
void				file::WriteFile(const std::wstring &fileName, void* buffer, long long int buffersize, bool truncate)
{
	for (unsigned int i = 0; i < fileName.size(); i++)
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		if (fileName[i] == L'\\') ::CreateDirectoryW(fileName.substr(0, i).c_str(), 0);
#else
		int mkdir(const char *path, mode_t mode);
		if (fileName[i] == L'/') mkdir(GetString(fileName.substr(0, i)).c_str(), 0777);
#endif
	}
	if (truncate) file::DeleteFile(fileName);
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ofstream fileHandle(fileName, std::ios_base::out | std::ios_base::binary | (truncate ? std::ios_base::trunc : (std::ios_base::app | std::ios_base::ate)));
#else
	std::ofstream fileHandle(GetString(fileName), std::ios_base::out | std::ios_base::binary | (truncate ? std::ios_base::trunc : (std::ios_base::app | std::ios_base::ate)));
#endif
	if (fileHandle.is_open())
	{
		fileHandle.write((char*)buffer, buffersize);
		fileHandle.close();
	}
}
void				file::WriteFile(const std::wstring &fileName, const std::wstringset& lineSet)
{
	std::wstring bufferToWrite;
	for (auto iline = lineSet.begin(); iline != lineSet.end(); iline++)
	{
		bufferToWrite += *iline;
		bufferToWrite += L'\n';
	}
	file::WriteFile(fileName, bufferToWrite, true);
}
void				file::WriteFile(const std::wstring &fileName, const std::vnwstringset& lineSet)
{
	std::wstring bufferToWrite;
	for (auto iline = lineSet.begin(); iline != lineSet.end(); iline++)
	{
		bufferToWrite += *iline;
		bufferToWrite += L'\n';
	}
	file::WriteFile(fileName, bufferToWrite, true);
}
void				file::WriteFile(const std::wstring &fileName, const std::wstringintmap& dataMap)
{
	std::wstring bufferToWrite;
	file::WriteFile(fileName, bufferToWrite, true);
	for (auto iline = dataMap.begin(); iline != dataMap.end(); iline++)
	{
		bufferToWrite += iline->first;
		bufferToWrite += L'\t';
		bufferToWrite += iline->second;
		bufferToWrite += L'\n';

		if (bufferToWrite.size() > 1000000)
		{
			file::WriteFile(fileName, bufferToWrite, false);
			bufferToWrite.clear();
		}
	}
	file::WriteFile(fileName, bufferToWrite, false);
}
void				file::WriteFile(const std::wstring &fileName, const std::vnwstringintmap& dataMap)
{
	std::wstring bufferToWrite;
	for (auto iline = dataMap.begin(); iline != dataMap.end(); iline++)
	{
		bufferToWrite += iline->first;
		bufferToWrite += L'\t';
		bufferToWrite += iline->second;
		bufferToWrite += L'\n';
	}
	file::WriteFile(fileName, bufferToWrite, true);
}
void				file::WriteFile(const std::wstring &fileName, const std::wstringdoublemap& dataMap)
{
	file dataFile;
	for (auto idata = dataMap.begin(); idata != dataMap.end(); idata++)
	{
		dataFile.Log(L"%ls	%lf\n", idata->first.c_str(), idata->second);
	}
	dataFile.WriteLog(fileName, true);
}
void				file::WriteFile(const std::wstring &fileName, const std::wstringmap& dataMap)
{
	file dataFile;
	for (auto idata = dataMap.begin(); idata != dataMap.end(); idata++)
	{
		dataFile.Log(L"%ls	%ls\n", idata->first.c_str(), idata->second.c_str());
	}
	dataFile.WriteLog(fileName, true);
}
void				file::DeleteFile(const std::wstring &fileName)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	::DeleteFileW(fileName.c_str());
#else
	remove(GetString(fileName).c_str());
#endif
}
void				file::GetRealFileName(const std::wstring &filePath, std::wstring &rFilename)
{
	rFilename.clear();
	for (auto i = 0u; i < filePath.size(); i++)
	{
		if (filePath[i] == L'\\' || filePath[i] == L'/') rFilename.clear();
		else rFilename += filePath[i];
	}
	auto pos = rFilename.find(L'.');
	if (pos != std::wstring::npos) rFilename.erase(pos, rFilename.size() - pos);
}
std::wstring		file::GetRealFileName(const std::wstring &filePath)
{
	std::wstring rFilename;
	file::GetRealFileName(filePath, rFilename);
	return rFilename;
}
void				file::GetExtensionFileName(const std::wstring &filePath, std::wstring &eFilename)
{
	eFilename.clear();
	for (auto i = 0u; i < filePath.size(); i++)
	{
		if (filePath[i] == L'\\' || filePath[i] == L'/') eFilename.clear();
		else eFilename += filePath[i];
	}
	auto pos = eFilename.find(L'.');
	if (pos != std::wstring::npos) eFilename.erase(0, pos + 1);
}
std::wstring		file::GetCurrentFolderName(void)
{
	std::wstring currentFolder;
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	wchar_t currentFolderBuffer[10000] = { 0 };
	GetCurrentDirectoryW(999, currentFolderBuffer);
	currentFolder = currentFolderBuffer;
#else
	char currentFolderBuffer[10000] = { 0 };
	char *getcwd(char *buf, size_t size);
	currentFolder = GetWString(getcwd(currentFolderBuffer, 9999));
#endif
	while (currentFolder.size() && currentFolder[currentFolder.size() - 1] == L'\\') currentFolder.erase(currentFolder.size() - 1);
	auto spos = currentFolder.find(L"\\");
	while (spos != std::wstring::npos)
	{
		currentFolder.erase(0, spos + 1);
		spos = currentFolder.find(L"\\");
	}
	return currentFolder;
}
void				file::SetCurrentFolderName(std::wstring folderName)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	SetCurrentDirectoryW(folderName.c_str());
#else
	int chdir(const char *path);
	chdir(GetString(folderName).c_str());
#endif
}
void				file::SplitBigTextToMultilFile(const std::wstring &filename, const std::wstring &subfilename)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::ifstream bigFileStream(filename, std::ifstream::in | std::ifstream::binary);
#else
	std::ifstream bigFileStream(GetString(filename), std::ifstream::in | std::ifstream::binary);
#endif
	if (bigFileStream.is_open())
	{
		bigFileStream.seekg(0, std::ios_base::end);
		long long buffFileSize = bigFileStream.tellg();
		bigFileStream.seekg(0, std::ios_base::beg);
		int			subFileNameIndex = 1;
		int			subBufferSize = 20 * 1024 * 1024;
		int			nearFullBufferSize = 19 * 1024 * 1024;
		char	*	subBuffer = (char*)calloc(subBufferSize, 1);
		long long	subBufferIndex = 0;
		char	*	readBuffer = (char*)calloc(8100000, 1);

		for (long long iChar = 0u; iChar < buffFileSize;)
		{
			long long			readSize = buffFileSize - iChar;
			if (readSize > 8000000) readSize = 8000000;
			if (readSize > 0)
			{
				bigFileStream.read(readBuffer, readSize);
				iChar += readSize;

				if (subBufferIndex + readSize < nearFullBufferSize)
				{
					memcpy(subBuffer + subBufferIndex, readBuffer, readSize);
					subBufferIndex += readSize;
				}
				else
				{
					int firstNewLineIndex = 0;
					for (; readBuffer[firstNewLineIndex] != '\r'&&readBuffer[firstNewLineIndex] != '\n'&&readBuffer[firstNewLineIndex] != 0; firstNewLineIndex++)
					{
						subBuffer[subBufferIndex++] = readBuffer[firstNewLineIndex];
					}
					file::WriteFile(subfilename + (subFileNameIndex < 100 ? std::wstring(L"0") : std::wstring(L"")) + (subFileNameIndex < 10 ? std::wstring(L"0") : std::wstring(L"")) + subFileNameIndex++ + std::wstring(L".txt"), subBuffer, subBufferSize, 1);
					subBufferIndex = 0;
					memset(subBuffer, 0, subBufferSize);
					if (readSize > firstNewLineIndex)
					{
						subBufferIndex = readSize - firstNewLineIndex;
						memcpy(subBuffer, readBuffer + firstNewLineIndex, subBufferIndex);
					}

				}
			}
		}
		free(subBuffer);
		free(readBuffer);
	}


}
/************************************************************************/
/* Các phương thức tĩnh thao tác với thư mục                            */
/************************************************************************/


#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
#else
DIR           *opendir(const char *);
struct dirent *readdir(DIR *);
int            readdir_r(DIR *, struct dirent *, struct dirent **);
void           rewinddir(DIR *);
void           seekdir(DIR *, long int);
long int       telldir(DIR *);
int            closedir(DIR *);
#endif




void				file::ScanFile(const std::wstring &path, const std::wstring &extension, std::wstringset &fileSet)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::wstring		wFolder = path;
	if (wFolder.size() && wFolder[wFolder.size() - 1] != L'\\') wFolder += L'\\';
	wFolder += extension;
	WIN32_FIND_DATAW		fd;
	HANDLE hFind = FindFirstFileW(wFolder.c_str(), &fd);
	if (hFind == INVALID_HANDLE_VALUE) return;
	do
	{
		if (fd.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)
		{//là thư mục
			if (wcscmp(fd.cFileName, L".") && wcscmp(fd.cFileName, L".."))
			{//không phải là thư mục đặc biệt
				std::wstring child = path;
				if (child.size() && child[child.size() - 1] != L'\\') child += L'\\';
				child += fd.cFileName;
				ScanFile(child, extension, fileSet);
			}
		}
		else
		{//là file
			std::wstring filePath = path;
			if (filePath.size() && filePath[filePath.size() - 1] != L'\\') filePath += L'\\';
			filePath += fd.cFileName;
			fileSet.insert(filePath);
		}
	} while (FindNextFileW(hFind, &fd));
	FindClose(hFind);
#else


	DIR *dir = opendir(GetString(path).c_str());
	class dirent *ent;
	class stat st;
	while ((ent = readdir(dir)) != NULL)
	{
		if (ent->d_name)
		{
			const std::string file_name = ent->d_name;
			const std::wstring full_file_name = path + L"/" + file_name;

			if (file_name[0] == '.')
			{
				/*do nothing*/
			}
			else if (stat(GetString(full_file_name).c_str(), &st) == -1)
			{
				/*do nothing*/
			}
			else
			{
				const bool is_directory = (st.st_mode & S_IFDIR) != 0;
				if (is_directory)
				{
					ScanFile(full_file_name, extension, fileSet);
				}
				else
				{
					fileSet.insert(full_file_name);
				}
			}
		}
	}
	closedir(dir);
#endif
}
void				file::ScanSubFolder(const std::wstring &path, std::wstringset &folderSet)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	std::wstring		wFolder = path;
	if (wFolder.size() && wFolder[wFolder.size() - 1] != L'\\') wFolder += L'\\';
	wFolder += L"*.*";
	WIN32_FIND_DATAW		fd;
	HANDLE hFind = FindFirstFileW(wFolder.c_str(), &fd);
	if (hFind == INVALID_HANDLE_VALUE) return;
	do
	{
		if (fd.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)
		{//là thư mục
			if (wcscmp(fd.cFileName, L".") && wcscmp(fd.cFileName, L".."))
			{//không phải là thư mục đặc biệt
				folderSet.insert(fd.cFileName);
			}
		}
	} while (FindNextFileW(hFind, &fd));
	FindClose(hFind);
#else
	DIR *dir = opendir(GetString(path).c_str());
	class dirent *ent;
	class stat st;
	while ((ent = readdir(dir)) != NULL)
	{
		const std::string file_name = ent->d_name;
		const std::wstring full_file_name = path + L"/" + file_name;

		if (file_name[0] == '.')
		{
			/*do nothing*/
		}
		else if (stat(GetString(full_file_name).c_str(), &st) == -1)
		{
			/*do nothing*/
		}
		else
		{
			const bool is_directory = (st.st_mode & S_IFDIR) != 0;
			if (is_directory)
			{
				folderSet.insert(full_file_name);
				//ScanFile(full_file_name, extension, fileSet);
			}
			else
			{
				//fileSet.insert(full_file_name);
			}
		}
	}
	closedir(dir);
#endif
}
void				file::CleanDirectory(const std::wstring &dirName)
{
	std::wstringset fileList;
	ScanFile(dirName, L"*.*", fileList);
	for (auto i = fileList.begin(); i != fileList.end(); i++) file::DeleteFile(i->c_str());
}
/************************************************************************/
/* Các phương thức với lớp XML File                                     */
/************************************************************************/
/*constructor*/		xml::xml(const std::wstring &xmlFileName, const std::wstring &nodeName) :file(xmlFileName)
{
	std::wstring bufferFileContent;
	file::Read(bufferFileContent);
	std::wstring startOfNodeString = L"<" + nodeName + L">";
	std::wstring endOfNodeString = L"</" + nodeName + L">";
	auto posStart = bufferFileContent.find(startOfNodeString);
	int  currentIndex = 0;
	while (posStart != std::wstring::npos)
	{
		auto posEnd = bufferFileContent.find(endOfNodeString);
		if (posEnd != std::wstring::npos)
		{
			std::wstring bufferNode = bufferFileContent.substr(posStart, posEnd - posStart + endOfNodeString.size());
			xmlContent.insert(xmlContent.end(), bufferNode);
			bufferFileContent.erase(posStart, posEnd - posStart + startOfNodeString.size() + 1);
			posStart = bufferFileContent.find(startOfNodeString);
			currentIndex++;
		}
		else
		{
			wprintf(L"Tại %ls thứ %d không tìm thấy %ls\n", startOfNodeString.c_str(), currentIndex, endOfNodeString.c_str());
			posStart = std::wstring::npos;
		}
	}
	wprintf(L"Đọc được %d %ls.\n", currentIndex, nodeName.c_str());
}
int					xml::Size(void)const
{
	return int(xmlContent.size());
}
std::wstring		xml::Attribute(int index, const std::wstring &attributeName)const
{
	int countIndex = 0;
	for (auto inode = xmlContent.begin(); inode != xmlContent.end() && countIndex <= index; inode++, countIndex++)
	{
		if (inode != xmlContent.end() && countIndex == index)
		{
			auto posStart = inode->find(L"<" + attributeName + L">");
			auto posEnd = inode->find(L"</" + attributeName + L">");
			if (posStart != std::wstring::npos && posEnd != std::wstring::npos && posStart < posEnd)
			{
				std::wstring result = inode->substr(posStart + attributeName.size() + 2, posEnd - posStart - attributeName.size() - 2);
				while (result.size() && (result[0] == L'\n' || result[0] == L'\r' || result[0] == L' ' || result[0] == L'\t')) result.erase(0, 1);
				while (result.size() && (result[result.size() - 1] == L'\n' || result[result.size() - 1] == L'\r' || result[result.size() - 1] == L' ' || result[result.size() - 1] == L'\t')) result.erase(result.size() - 1, 1);
				return result;
			}
		}
	}
	return L"";
}
std::wstring		xml::GetAndClearAttribute(int index, const std::wstring &attributeName)
{
	int countIndex = 0;
	for (auto inode = xmlContent.begin(); inode != xmlContent.end() && countIndex <= index; inode++, countIndex++)
	{
		if (inode != xmlContent.end() && countIndex == index)
		{
			auto posStart = inode->find(L"<" + attributeName + L">");
			auto posEnd = inode->find(L"</" + attributeName + L">");
			if (posStart != std::wstring::npos && posEnd != std::wstring::npos && posStart < posEnd)
			{
				std::wstring result = inode->substr(posStart + attributeName.size() + 2, posEnd - posStart - attributeName.size() - 2);
				inode->erase(posStart, posEnd - posStart + attributeName.size() + 3);
				while (result.size() && (result[0] == L'\n' || result[0] == L'\r' || result[0] == L' ' || result[0] == L'\t')) result.erase(0, 1);
				while (result.size() && (result[result.size() - 1] == L'\n' || result[result.size() - 1] == L'\r' || result[result.size() - 1] == L' ' || result[result.size() - 1] == L'\t')) result.erase(result.size() - 1, 1);

				Replace(result, L"\"", L"'");
				Replace(result, L"\r", L" ");
				Replace(result, L"\t", L" ");
				Replace(result, L"\n", L"\t");
				Replace(result, L"  ", L" ");
				Replace(result, L"\t ", L"\t");
				Replace(result, L" \t", L"\t");
				Replace(result, L"\t\t", L"\t");
				return result;
			}
		}
	}
	return L"";
}
std::wstring		xml::GetOriginalAttribute(int index, const std::wstring &attributeName)
{
	int countIndex = 0;
	for (auto inode = xmlContent.begin(); inode != xmlContent.end() && countIndex <= index; inode++, countIndex++)
	{
		if (inode != xmlContent.end() && countIndex == index)
		{
			auto posStart = inode->find(L"<" + attributeName + L">");
			auto posEnd = inode->find(L"</" + attributeName + L">");
			if (posStart != std::wstring::npos && posEnd != std::wstring::npos && posStart < posEnd)
			{
				std::wstring result = inode->substr(posStart + attributeName.size() + 2, posEnd - posStart - attributeName.size() - 2);
				return result;
			}
		}
	}
	return L"";
}
void				xml::ScanAllXMLTag(const std::wstring& xmlPath /*= L"DuLieuTuDienPhanLoaiTiengViet\\vcl_xml\\"*/, const std::wstring xmlTagFileName /*= L"xmlTag.txt"*/)
{
	std::wstringset xmlFileSet;
	file::ScanFile(xmlPath, L"*.xml", xmlFileSet);
	std::wstringset xmlTag;
	for (auto iFile = xmlFileSet.begin(); iFile != xmlFileSet.end(); iFile++)
	{
		wprintf(L"Scan file %ls\n", iFile->c_str());
		std::wstring xmlContent = file::ReadFile(*iFile);
		std::wstring currentTag;
		for (auto i = 0u, scanStatus = 0u; i < xmlContent.size(); i++)
		{
			if (scanStatus == 1)
			{
				if (xmlContent[i] == L'>')
				{
					if (currentTag.size())
					{
						xmlTag.insert(L"<" + currentTag + L">");
						currentTag.clear();
					}
					scanStatus = 0;
				}
				else currentTag += xmlContent[i];
			}
			else if (xmlContent[i] == L'<') scanStatus = 1;
		}
	}
	file::WriteFile(xmlTagFileName, xmlTag);
}
