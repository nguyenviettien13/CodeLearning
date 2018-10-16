#ifndef _FILE_CLASS_H__
#define _FILE_CLASS_H__
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
#include <list>
#include <locale>
#include <codecvt>
#include <string.h>
#include <stdio.h>
#include <stdarg.h> 
#include <wchar.h>
#include "string.h"
#include "gui.h"
class file
{
private:
	std::wstring		fileFullName;
	std::wstring		fileRealName;
	std::wstring		fileExtensionName;
	std::wstring		fileLog;
	long long int		fileSize;
	/************************************************************************/
	/* Các phương thức lớp file                                             */
	/************************************************************************/
public:
	/*constructor*/		file(const std::wstring &fullFileName = L"");
	bool				Read(std::wstring &buffer);
	bool				Read(void* buffer, long long int buffersize);
	bool				Write(const std::wstring &buffer, bool truncate = false);
	bool				Write(const void* buffer, long long int buffersize, bool truncate = false);
	bool				Exist(void)const;
	long long int		Size(void)const;	
	const std::wstring&	Log(const wchar_t* format = 0, .../*Limit is 10240 bytes*/);
	const std::wstring&	Log(const std::wstring &wstr);
	const std::wstring&	LogWstr(const std::wstring &wstr);
	void				WriteLog(const std::wstring &logFileName, bool truncate = false);
	const std::wstring&	RealFileName(void)const;
	const std::wstring&	ExtensionFileName(void)const;
	/************************************************************************/
	/* Các phương thức tĩnh thao tác với file                               */
	/************************************************************************/
public:
	static bool			ExistsFile(const std::wstring &fileName);
	static std::wstring ReadFile(const std::wstring &fileName);
	static bool			ReadFile(const std::wstring &fileName, std::wstring &buffer);
	static void			ReadFile(const std::wstring &fileName, std::wstringset &bufferLineSet);
	static void			ReadFile(const std::wstring &fileName, std::wstringlist &bufferLineList);
	static void			ReadFile(const std::wstring &fileName, std::wstringintmap& dataMap);
	static void			ReadFileBinary(const std::wstring &fileName, void* buffer, INT64 bufferSize);
	static bool			ReadFileSubSegment(const std::wstring &fileName, void * buffer, long long int offset, long long int length);
	static void			ReadFileLine(const std::wstring &filename, std::wstringlist& bufferLineList/*delim is \r and \n*/, bool getEmptyLine = false);
	static void			ReadFileSyllable(const std::wstring &fileName, std::wstringlist& bufferSyllableList/*delim is space and \r and \n*/);
	static void			ReadFileSyllable(const std::wstring &fileName, std::wstringset& bufferSyllableSet/*delim is space and \r and \n*/);
	static void			WriteFile(const std::wstring &fileName, const std::wstring &wstr, bool truncate = false);
	static void			WriteFile(const std::wstring &fileName, void* buffer, long long int buffersize, bool truncate = false);
	static void			WriteFile(const std::wstring &fileName, const std::wstringset& lineSet);
	static void			WriteFile(const std::wstring &fileName, const std::vnwstringset& lineSet);
	static void			WriteFile(const std::wstring &fileName, const std::wstringintmap& dataMap);
	static void			WriteFile(const std::wstring &fileName, const std::vnwstringintmap& dataMap);
	static void			WriteFile(const std::wstring &fileName, const std::wstringdoublemap& dataMap);
	static void			WriteFile(const std::wstring &fileName, const std::wstringmap& dataMap);
	static void			DeleteFile(const std::wstring &fileName);
	static void			GetRealFileName(const std::wstring &filePath, std::wstring &rFilename);
	static std::wstring	GetRealFileName(const std::wstring &filePath);
	static void			GetExtensionFileName(const std::wstring &filePath, std::wstring &eFilename);
	static std::wstring GetCurrentFolderName(void);
	static void			SetCurrentFolderName(std::wstring folderName);
	static void			SplitBigTextToMultilFile(const std::wstring &filename, const std::wstring &subfilename);
	/************************************************************************/
	/* Các phương thức tĩnh thao tác với thư mục                            */
	/************************************************************************/
	static void			ScanFile(const std::wstring &path, const std::wstring &extension, std::wstringset &fileSet);
	static void			ScanSubFolder(const std::wstring &path, std::wstringset &folderSet);
	static void			CleanDirectory(const std::wstring &dirName);
};
class xml :public file
{
private:
	std::list<std::wstring> xmlContent;
public:
	/*constructor*/		xml(const std::wstring &xmlFileName, const std::wstring &nodeName);
	int					Size(void)const;
	std::wstring		Attribute(int index, const std::wstring &attributeName)const;
	std::wstring		GetAndClearAttribute(int index, const std::wstring &attributeName);
	std::wstring		GetOriginalAttribute(int index, const std::wstring &attributeName);
public:
	static void			ScanAllXMLTag(const std::wstring& xmlPath = L"DuLieuTuDienPhanLoaiTiengViet\\vcl_xml\\", const std::wstring xmlTagFileName = L"xmlTag.txt");
};

#endif