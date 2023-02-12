#include <windows.h>

int main()
{
    HWND taskbar = FindWindow("Shell_TrayWnd", NULL);
    if (!IsWindowVisible(taskbar))
    {
        ShowWindow(taskbar, SW_SHOW);
    }

    return 0;
}