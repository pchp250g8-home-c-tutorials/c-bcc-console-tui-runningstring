#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <tchar.h>
#include <time.h>
#include <threads.h>
#include <conio.h>
#include <windows.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    int nStrLen;
    int nCounter = 0;
    char szLine[_MAX_PATH] = "";
    char szSpaces[80] = "";
    memset(szSpaces, 32, 80);
    memset(szLine, 0, _MAX_PATH);
    memcpy(szLine, szSpaces, 80);
    strncat(szLine, "Hello World!!! Running String!!! Press Any Key To Exit!!!", 58);
    strncat(szLine, szSpaces, 80);
    nStrLen = strlen(szLine) - 80;
    clrscr();
    _setcursortype(0);
    do
    {
        memcpy(szSpaces, szLine + nCounter, 80);
        szSpaces[79] = 0;
        gotoxy(10,10);
        cprintf("%s", szSpaces);
        Sleep(140);
        nCounter++;
        if (nCounter >= nStrLen) nCounter = 0;
    }while(kbhit() == 0);
    return 0;
}
