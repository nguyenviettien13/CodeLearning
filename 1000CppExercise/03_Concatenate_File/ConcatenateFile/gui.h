#ifndef _GUI_CLASS_H__
#define _GUI_CLASS_H__
#include "string.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <set>
#include <map>
#include <list>
#include <locale>
#include <codecvt>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <wchar.h>
#include <stdlib.h>
/************************************************************************/
/* Các phương thức tĩnh thao tác với cửa sổ console                     */
/************************************************************************/
class gui
{/* Lớp gui chứa các hàm đồ họa cơ bản dành cho win32 console*/
public:
	enum CONSOLE_COLOR_COLORS
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		CONSOLE_COLOR_BLACK = 0,
		CONSOLE_COLOR_BLUE = 1,
		CONSOLE_COLOR_GREEN = 2,
		CONSOLE_COLOR_CYAN = 3,
		CONSOLE_COLOR_RED = 4,
		CONSOLE_COLOR_MAGENTA = 5,
		CONSOLE_COLOR_BROWN = 6,
		CONSOLE_COLOR_LIGHTGRAY = 7,
		CONSOLE_COLOR_DARKGRAY = 8,
		CONSOLE_COLOR_LIGHTBLUE = 9,
		CONSOLE_COLOR_LIGHTGREEN = 10,
		CONSOLE_COLOR_LIGHTCYAN = 11,
		CONSOLE_COLOR_LIGHTRED = 12,
		CONSOLE_COLOR_LIGHTMAGENTA = 13,
		CONSOLE_COLOR_YELLOW = 14,
		CONSOLE_COLOR_WHITE = 15,
		CONSOLE_COLOR_BLINK = 128
#else
		CONSOLE_COLOR_BLACK = 30,
		CONSOLE_COLOR_RED = 31,
		CONSOLE_COLOR_GREEN = 32,
		CONSOLE_COLOR_YELLOW = 33,
		CONSOLE_COLOR_BLUE = 34,
		CONSOLE_COLOR_MAGENTA = 35,
		CONSOLE_COLOR_CYAN = 36,
		CONSOLE_COLOR_LIGHTGRAY = 37,
		CONSOLE_COLOR_DARKGRAY = 90,
		CONSOLE_COLOR_LIGHTRED = 91,
		CONSOLE_COLOR_LIGHTGREEN = 92,
		CONSOLE_COLOR_LIGHYELLOW = 93,
		CONSOLE_COLOR_LIGHTBLUE = 94,
		CONSOLE_COLOR_LIGHTMAGENTA = 95,
		CONSOLE_COLOR_LIGHTCYAN = 96,
		CONSOLE_COLOR_BOLD = 1,
		CONSOLE_COLOR_DISABLE_BOLD = 21,
		CONSOLE_COLOR_UNDERLINE = 4,
		CONSOLE_COLOR_DISABLE_UNDERLINE = 24,
		CONSOLE_COLOR_BLINK = 5,
		CONSOLE_COLOR_DISABLE_BLINK = 25
#endif
	};
public:
	static void			ClearScreen(void);
	static void			SetTitle(const std::wstring& title);
	static void			SetSize(int width, int height);
	static void			HideCursor(void);
	static void			ShowCursor(void);
	static void			SetTextColor(CONSOLE_COLOR_COLORS color);
	static void			SetBackgroundColor(CONSOLE_COLOR_COLORS color);
	static void			GoToXY(int x, int y);
	static int			GetX(void);
	static int			GetY(void);
	static void			Write(const std::wstring& wstr, int delay = 15);
	static void			Show(const std::wstring& title, const wchar_t * format, ...);
	static void			Show(const std::string& title, const char * format, ...);
	static void			Copyright(void);
	static int			ScanIntegerNumber(void);
	static void			Validate(int level);
	static std::wstring	GetCurrentComputerName(void);
public:
	/*constructor*/		gui(const std::wstring& title);
	/*destructor*/		~gui();
};
#endif













