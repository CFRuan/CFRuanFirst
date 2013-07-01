// TestErrorWatch.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <WinError.h>
#include <stdio.h>
#include <windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR a;
	HANDLE hFile = CreateFile(TEXT("C:\\Ruan"),0,0,NULL,OPEN_EXISTING,0,NULL);
	return 0;
}

