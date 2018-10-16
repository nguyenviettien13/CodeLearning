#ifndef _STRING_LIBRARY_H__
#define _STRING_LIBRARY_H__
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
#else
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#endif
#ifdef ON_REMOTE_LINUX
#undef WIN32
#undef _WIN64
#endif



#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
#ifndef INT64
#include <Windows.h>
#include <conio.h>
#endif
#else

typedef long long int INT64;
#endif
namespace std
{
	/************************************************************************/
	/* wstring                                                              */
	/************************************************************************/
	class				wcslesscmp { public: bool operator()(const std::wstring& lhs, const std::wstring& rhs)const; };
	class				vnslesscmp { public: bool operator()(const std::wstring& lhs, const std::wstring& rhs)const; };
	typedef				std::list<std::wstring>										wstringlist;
	typedef				std::set<std::wstring, std::wcslesscmp>						wstringset;
	typedef				std::map<std::wstring, std::wstring, std::wcslesscmp>		wstringmap;
	typedef				std::map<std::wstring, int, std::wcslesscmp>				wstringintmap;
	typedef				std::map<std::wstring, long long, std::wcslesscmp>			wstringlonglongmap;
	typedef				std::map<std::wstring, INT64, std::wcslesscmp>				wstringint64map;
	typedef				std::map<std::wstring, double, std::wcslesscmp>				wstringdoublemap;
	typedef				std::map<std::wstring, std::string, std::wcslesscmp>		wstringstringmap;
	typedef				std::set<std::wstring, std::vnslesscmp>						vnwstringset;
	typedef				std::map<std::wstring, std::wstring, std::vnslesscmp>		vnwstringmap;
	typedef				std::map<std::wstring, int, std::vnslesscmp>				vnwstringintmap;
	bool				operator ==(const std::wstring& a, const std::wstring& b);
	bool				operator ==(const std::wstring& a, const wchar_t* b);
	bool				operator !=(const std::wstring& a, const std::wstring& b);
	bool				operator !=(const std::wstring& a, const wchar_t* b);
	std::wstring		operator +(const std::wstring& a, const std::wstring& b);
	std::wstring		operator +(const std::wstring& a, const std::string& b);
	std::wstring		operator +(const std::string& a, const std::wstring& b);
	std::wstring		operator +(const std::wstring& wstr, long long int n);
	std::wstring		operator +(const std::wstring& wstr, int n);
	std::wstring		operator +(const std::wstring& wstr, wchar_t wch);
	std::wstring		operator +(const std::wstring& wstr, double n);
	void				operator +=(std::wstring& wstr, char ch);
	void				operator +=(std::wstring& wstr, int n);
	void				operator +=(std::wstring& wstr, INT64 n);
	//void				operator +=(std::wstring& wstr, wchar_t wch);
	void				operator +=(std::wstring& wstr, unsigned int n);
	void				operator +=(std::wstring& wstr, double n);
	void				operator +=(std::wstring& wstr, const std::string& str);
	void				operator +=(std::wstring& wstr, const char * str);
	/************************************************************************/
	/* string                                                               */
	/************************************************************************/
	class				strlesscmp { public: bool operator()(const std::string& lhs, const std::string& rhs)const; };
	typedef				std::list<std::string>										stringlist;
	typedef				std::set<std::string, std::strlesscmp>						stringset;
	typedef				std::map<std::string, std::string, std::strlesscmp>			stringmap;
	typedef				std::map<std::string, int, std::strlesscmp>					stringintmap;
	typedef				std::map<std::string, char, std::strlesscmp>				stringcharmap;
	typedef				std::map<std::string, double, std::strlesscmp>				stringdoublemap;
	typedef				std::map<std::string, std::wstring, std::strlesscmp>		stringwstringmap;
	bool				operator ==(const std::string& a, const std::string& b);
	bool				operator !=(const std::string& a, const std::string& b);
	std::string			operator +(const std::string& a, const std::string& b);
	std::string			operator +(const std::string& str, int n);
	void				operator +=(std::string& str, int n);
	//void				operator +=(std::string& str, unsigned int n);
	void				operator +=(std::string& str, double n);
	void				operator +=(std::string& str, const std::wstring& wstr);
	void				operator +=(std::string& str, const wchar_t * wstr);
	const std::wstringset& Copy(std::wstringset& dest, const std::wstringset& source);
	const std::wstringset& Copy(std::vnwstringset& dest, const std::wstringset& source);
	const std::wstringintmap& Copy(std::wstringintmap& dest, const std::wstringintmap& source);
	const std::wstringmap& Copy(std::wstringmap& dest, const std::wstringmap& source);
};
/************************************************************************/
/* Các hàm xử lý chung wstring và string                                */
/************************************************************************/
int					StartWith(const std::string& str, const std::string& subStr);
int					StartWith(const std::wstring& str, const std::wstring& subStr);
int					EndWith(const std::string& str, const std::string& subStr);
int					EndWith(const std::wstring& str, const std::wstring& subStr);
int					CountCharacter(const std::wstring& str, wchar_t wch);
std::wstring		GetSubString(const wchar_t* str, int subLength);
std::wstring		GetWString(const std::string& str);
std::wstring		GetWString(const wchar_t * wstr, int length);
std::wstring		GetWString(const char * str, int length);
std::wstring		GetWString(const char * str, long long int length);
std::string			GetString(const std::wstring& str);
void				Split(const std::wstring &str, std::wstringlist &wordlist, wchar_t delim, bool getEmptySub = false);
void				Split(const std::wstring &str, std::wstringset &wordset, wchar_t delim, bool getEmptySub = false);
void				Split(const std::wstring &str, std::vnwstringset &wordset, wchar_t delim, bool getEmptySub = false);
void				Split(const std::string &str, std::stringlist &wordlist, char delim, bool getEmptySub = false);
int					GetCountSyllable(const std::string &str);
int					GetCountSyllable(const std::wstring &wstr);
bool				Exist(const std::wstringset& wstrSet, const std::wstring &wstr);
bool				Exist(const std::wstringmap& wstrMap, const std::wstring &wstr);

/************************************************************************/
/* Japanese                                                             */
/************************************************************************/
bool				IsHiragana(wchar_t wch);
bool				IsHiragana(const std::wstring& wstr);
bool				IsValidHiragana(const std::wstring& hiragana);
/************************************************************************/
/* Vietnamese Tone                                                     */
/************************************************************************/
enum VIETNAMESE_TONE
{
	VIETNAMESE_TONE_NO_TONE = 0,	/*z = bằng + cao*/
	VIETNAMESE_TONE_HUYEN = 1,		/*f = bằng + thấp*/
	VIETNAMESE_TONE_NGA = 2,		/*x = trắc + gẫy + cao*/
	VIETNAMESE_TONE_HOI = 3,		/*r = trắc + gẫy + thấp*/
	VIETNAMESE_TONE_SAC = 4,		/*s = trắc + không gẫy + cao*/
	VIETNAMESE_TONE_NANG = 5,		/*j = trắc + không gẫy + thấp*/
};


/************************************************************************/
/* Vietnamese String API                                                */
/************************************************************************/
VIETNAMESE_TONE		GetTone(wchar_t wch);
VIETNAMESE_TONE		GetFirstTone(const std::wstring& syllable);
wchar_t				GetCharacterWithTone(wchar_t wch, VIETNAMESE_TONE tone);
std::wstring		GetToneName(const VIETNAMESE_TONE tone);
int					GetFirstCharacterWithToneIndex(const std::wstring& syllable);
bool				IsVowel(wchar_t wch);
bool				IsConsonant(wchar_t wch);
bool				IsLower(wchar_t wch);
bool				IsLower(const std::string &str);
bool				IsLower(const std::wstring &wstr);
wchar_t				GetLower(wchar_t wch);
std::string			GetLower(const std::string &str);
std::wstring		GetLower(const std::wstring &wstr);
void				ToLower(std::string &str);
void				ToLower(std::wstring &wstr);
bool				IsUpper(wchar_t wch);
bool				IsStartUpper(const std::string &str);
bool				IsStartUpper(const std::wstring &wstr);
bool				IsFullUpper(const std::string &str);
bool				IsFullUpper(const std::wstring &wstr);
wchar_t				GetUpper(wchar_t wch);
std::string			GetUpper(const std::string &str);
std::wstring		GetUpper(const std::wstring &wstr);
void				ToUpper(std::string &str);
void				ToUpper(std::wstring &wstr);
wchar_t				GetBase(wchar_t wch);
std::string			GetBase(const std::string& str);
std::wstring		GetBase(const std::wstring& wstr);
std::wstring		GetTelex(wchar_t wch);
std::wstring		GetTelex(const std::wstring& wstr);
std::wstring		GetStringInEnglish(const std::wstring& wstr);
int					GetFirstInt(const std::wstring& wstr);
int					Replace(std::wstring &wstr, const std::wstring &oldSub, const std::wstring &newSub);
int					Replace(std::wstring &wstr, wchar_t oldChar, wchar_t newChar);
int					Replace(std::string &wstr, const std::string &oldSub, const std::string &newSub);
int					Replace(std::string &wstr, char oldChar, char newChar);
std::wstring		GetUnicodeFromVNI(const std::wstring &vniStr);
std::wstring		GetVNIFromUnicode(const std::wstring &unicodewstr);
int					HaveSomeVietnameseCharacter(wchar_t wch);
int					HaveSomeVietnameseCharacter(const std::wstring& wstr);
int					GetTotalVowel(const std::wstring& wstr);
bool				SyllableInList(const std::wstring& syllable, const std::wstring& syllableStringList/*separated by space*/);
void				ReduceDataSet(std::wstringset &syllableSet);
void				ReduceDataSet(std::stringset &syllableSet);
void				RemoveExtraSpace(std::wstring& wstr);

/************************************************************************/
/* Combining                                                            */
/************************************************************************/
std::wstring		GetSyllableWithCombiningTone(const std::wstring& vnsyllable);
std::wstring		GetSyllableWithCombiningAccent(const std::wstring& wstr);
std::wstring		GetSyllableWithCombiningInvertedBreve(const std::wstring& wstr);
std::wstring		GetSyllableWithCombiningBreve(const std::wstring& wstr);
std::wstring		GetSyllableWithCombiningCaron(const std::wstring& wstr);
std::wstring		GetSyllableWithCombiningHorn(const std::wstring& wstr);





std::wstring		GetSyllableWithCombiningToneMark(const std::wstring& wstr);
bool				IsEnglishVowelCharacter(wchar_t wch);
bool				IsEnglishVowelPhoneme(const std::wstring &phoneme);
bool				IsEnglishConsonantCharacter(wchar_t wch);
/************************************************************************/
/* Other                                                                */
/************************************************************************/
class wstringpool
{
private:

	std::wstring			poolData;
	std::wstringset			dataSet;
	std::vnwstringintmap	dataToIndexMap;
	int						originalSize;
public:
	/*constructor*/		wstringpool();
	int					Insert(const std::wstring & wstr);
	const std::wstring&	Build(void);
	const std::wstring& PoolData(void);
};




#endif