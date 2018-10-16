#include <cstdio>
#include "iostream"
#include "string.h"
#include "file.h"


int main()
{
	std::wstringset setFileName;
	file::ScanFile(L"/home/tien/SpeechRecognization/02BuildSRILanguageModule/TextInput",L"*.*", setFileName);

	std::wstringset sentenceSet;
	for (std::wstring txtFileName : setFileName)
	{
		wprintf(L"Reading file %ls ...", txtFileName.c_str());
		file::ReadFile(txtFileName, sentenceSet);
	}

	file::WriteFile(L"SpeechRecognization/02BuildSRILanguageModule/Output/FileEliminateDuplicate.txt", sentenceSet);

	const std::wstring fullFileName = L"data.txt";
	file f1 = file(fullFileName);
	
	return 0;
}