#include <windows.h>

int main(void)
{
    INPUT dwn, up;

    Sleep(5000);

    dwn.type = INPUT_MOUSE;
    dwn.mi.dwFlags = (MOUSEEVENTF_LEFTDOWN);
    dwn.mi.mouseData = 0;
    dwn.mi.time = 0;

    up.type = INPUT_MOUSE;
    up.mi.dwFlags = (MOUSEEVENTF_LEFTUP);
    dwn.mi.mouseData = 0;
    dwn.mi.time = 0;

    while (TRUE)
    {
        SendInput(1, &dwn, sizeof(INPUT));
        Sleep(25);
        SendInput(1, &up, sizeof(INPUT));
    }
}