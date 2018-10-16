#include "../libH/gui.h"
void			gui::ClearScreen(void)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	CONSOLE_SCREEN_BUFFER_INFO  csbiInfo;
	HANDLE  hConsoleOut;
	COORD   Home = { 0, 0 };
	DWORD   dummy;
	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);
	FillConsoleOutputCharacter(hConsoleOut, ' ', csbiInfo.dwSize.X * csbiInfo.dwSize.Y, Home, &dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
	GoToXY(0, 0);
	for (int i = 0; i < 50; i++) printf("                                                                                 ");
	GoToXY(0, 0);
#else
	system("clear");
#endif
}
void			gui::SetTitle(const std::wstring& title)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	SetConsoleTitleW(title.c_str());
#endif
}
void			gui::SetSize(int width, int height)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwSize = { (short)width, (short)height };
	SetConsoleScreenBufferSize(hConsoleOutput, dwSize);
#endif
}
void			gui::HideCursor(void)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	HANDLE hOut;
	CONSOLE_CURSOR_INFO ConCurInf;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = FALSE;
	SetConsoleCursorInfo(hOut, &ConCurInf);
#endif
}
void			gui::ShowCursor(void)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	HANDLE hOut;
	CONSOLE_CURSOR_INFO ConCurInf;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = TRUE;
	SetConsoleCursorInfo(hOut, &ConCurInf);
#endif
}
void			gui::SetTextColor(CONSOLE_COLOR_COLORS color)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	DWORD dcolor = color;
	dcolor &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= dcolor;
	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
#else
#ifndef ON_REMOTE_LINUX
	std::cout << "\033[" << color << "m";
#endif
#endif
}
void			gui::SetBackgroundColor(CONSOLE_COLOR_COLORS color)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	DWORD dcolor = color;
	dcolor &= 0x000f;
	dcolor <<= 4;
	wAttributes &= 0xff0f;
	wAttributes |= dcolor;
	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
#else
	std::cout << "\033[" << color << "m";
#endif
}
void			gui::GoToXY(int x, int y)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Cursor_an_Pos = { (short)x, (short)y };
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
#else
	printf("%c[%d;%df", 0x1B, y, x);
#endif
}
int				gui::GetX(void)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hConsoleOutput, &csbi);
	return csbi.dwCursorPosition.X;
#else
	return 0;
#endif
}
int				gui::GetY(void)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hConsoleOutput, &csbi);
	return csbi.dwCursorPosition.Y;
#else
	return 0;
#endif
}
void			gui::Write(const std::wstring& wstr, int delay/*=15*/)
{
	for (auto i = 0u; i < wstr.length(); i++)
	{
		wprintf(L"%c", wstr[i]);
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		Sleep(delay);
#endif
	}
}
void			gui::Show(const std::wstring& title, const wchar_t * format, ...)
{
	if (format)
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		wchar_t 	buffer[10250] = { 0 };
		va_list args;
		va_start(args, format);
		_vsnwprintf_s(buffer, 10240, format, args);
		va_end(args);
		int supportFlag = 0;
		if (GetLower(title).find(L"lỗi") != std::wstring::npos) supportFlag = MB_ICONERROR;
		else if (GetLower(title).find(L"cảnh báo") != std::wstring::npos) supportFlag = MB_ICONWARNING;
		::MessageBoxW(0, buffer, title.c_str(), MB_OK | supportFlag);
#else
		wchar_t 	buffer[10250] = { 0 };
		va_list args;
		va_start(args, format);
		vswprintf(buffer, 10240, format, args);
		va_end(args);
		gui::SetTextColor(CONSOLE_COLOR_BOLD);
		printf("%s\n", GetString(title).c_str());
		gui::SetTextColor(CONSOLE_COLOR_DISABLE_BOLD);
		printf("%s\n", GetString(buffer).c_str());
#endif
	}
}
void			gui::Show(const std::string& title, const char * format, ...)
{
	if (format)
	{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
		char 	buffer[10250] = { 0 };
		va_list args;
		va_start(args, format);
		_vsnprintf_s(buffer, 10240, format, args);
		va_end(args);
		int supportFlag = 0;
		if (GetLower(GetWString(title)).find(L"lỗi") != std::wstring::npos) supportFlag = MB_ICONERROR;
		else if (GetLower(GetWString(title)).find(L"cảnh báo") != std::wstring::npos) supportFlag = MB_ICONWARNING;
		::MessageBoxA(0, buffer, title.c_str(), MB_OK | supportFlag);
#else
		char 	buffer[10250] = { 0 };
		va_list args;
		va_start(args, format);
		vsnprintf(buffer, 10240, format, args);
		va_end(args);
		gui::SetTextColor(CONSOLE_COLOR_RED);
		printf("%s\n", title.c_str());
		printf("%s\n", buffer);
#endif
	}
}
static void		guiWrite(int xsource, int ysource, int xdest, int ydest, const wchar_t *wstr/*=L"Quang"*/, int delay/*=15*/, gui::CONSOLE_COLOR_COLORS color/*=CONSOLE_COLOR_GREEN*/)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	gui::SetTextColor((gui::CONSOLE_COLOR_COLORS)color);
	if (xsource == xdest && ysource > ydest)
	{
		for (; wstr[0]; wstr++)
		{
			if (wstr[0] != 32)
			{
				for (int i = ysource; i >= ydest; i--)
				{
					gui::GoToXY(xsource, i);
					wprintf(L"%c", wstr[0]);
					gui::GoToXY(xsource, i + 1);
					wprintf(L" ");
					Sleep(delay);
				}
			}
			else
			{
				gui::GoToXY(xsource, ydest);
				wprintf(L" ");
			}
			xsource++;
		}
	}
	if (ydest == ysource && xsource > xdest)
	{
		for (; wstr[0]; wstr++)
		{
			if (wstr[0] != 32)
			{
				for (int i = xsource; i >= xdest; i--)
				{
					gui::GoToXY(i, ysource);
					wprintf(L"%c ", wstr[0]);
					Sleep(delay);
				}
			}
			else
			{
				gui::GoToXY(xsource, ydest);
				wprintf(L" ");
			}
			xdest++;
		}
	}
#endif
}
void			gui::Copyright(void)
{
	gui::ClearScreen();
	gui::HideCursor();
	int x = 13;
	int y = 5;
	gui::GoToXY(x, y + 1);  printf(" / _` | | | |/ _` | '_ \\ / _` | \\ \\/ / _ \\ '_ \\ / _` |");
	gui::GoToXY(x, y + 2);  printf("| (_| | |_| | (_| | | | | (_| |  >  <  __/ | | | (_| |");
	gui::GoToXY(x, y + 3);  printf(" \\__, |\\__,_|\\__,_|_| |_|\\__, | /_/\\_\\___|_| |_|\\__, |");
	gui::GoToXY(x, y + 4);  printf("    | |                   __/ |                  __/ |");
	gui::GoToXY(x, y + 5);  printf("    |_|                  |___/                  |___/");
	guiWrite(26, 15, 26, 13, L"Duoc viet boi Bui Tan Quang", 15, CONSOLE_COLOR_GREEN);
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	Sleep(2000);
#endif
}
int				gui::ScanIntegerNumber(void)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	char ch = 'a', xau[10], i = 0;
	while (ch != 0xD || i == 0)
	{
		ch = _getch();

		if (ch == 0x8 && i) --i, printf("\b \b");
		if ((!((i == 0 && ch == '-') || (ch >= '0'&&ch <= '9'))) || i > 6) continue;
		xau[i++] = ch;
		printf("%c", ch);
	}
	xau[i] = NULL;
	return atoi(xau);
#else
	return 0;
#endif
}
void			gui::Validate(int level)
{
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)

	char buffer[20] = { 0 };
	int  bufferindex = 0;
	char ch = 'a';

	if (level > 0)
	{
		gui::ShowCursor();
		gui::SetTextColor(CONSOLE_COLOR_MAGENTA);
		printf("\nPassword : ");
		while (isalnum(ch))
		{
			ch = _getch();
			if (bufferindex < 15 && isalnum(ch))
			{
				printf("*");
				buffer[bufferindex++] = ch;
			}
		}
		gui::HideCursor();
	}
	switch (level)
	{
	case 0:
		printf("...An nut bat ki de bat dau...\n");
		_getch();
		break;
	case 1://fti
		if (!(buffer[0] + 4 == 'f' + 4 && buffer[1] + 5 == 't' + 5 && buffer[2] + 6 == 'i' + 6))
		{
			printf("\nWrong password!!!");
			_getch();
			Copyright();
			exit(0);
		}
		break;
	case 2://ftifho
		if (!(buffer[0] + 4 == 'f' + 4 && buffer[1] + 5 == 't' + 5 && buffer[2] + 6 == 'i' + 6 && buffer[3] + 8 == 'f' + 8 && buffer[4] + 9 == 'h' + 9 && buffer[5] + 7 == 'o' + 7
			))
		{
			printf("\nWrong password!!!");
			_getch();
			Copyright();
			exit(0);
		}
		break;
	default:
		Copyright();
		exit(0);
		break;
	}
	fflush(stdin);
	printf("\n");
	gui::SetTextColor(CONSOLE_COLOR_GREEN);
#endif
}

std::wstring gui::GetCurrentComputerName(void)
{
	wchar_t	currentComputerName[1000] = { 0 };
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	DWORD	maxBuffer = 999;
	::GetComputerNameW(currentComputerName, &maxBuffer);
#endif
	return currentComputerName;
}

/*constructor*/	gui::gui(const std::wstring& title)
{
	SetTitle(title);
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	gui::SetBackgroundColor(CONSOLE_COLOR_WHITE);
#endif
	gui::ClearScreen();
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(_MSC_VER)
	gui::SetTextColor(CONSOLE_COLOR_GREEN);
#endif
	gui::HideCursor();
}
/*destructor*/	gui::~gui()
{
	gui::Copyright();
}



