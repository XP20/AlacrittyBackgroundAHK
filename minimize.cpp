#include <windows.h>
#include <tchar.h>
#include <string>

BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam)
{
    TCHAR windowTitle[256];
    GetWindowText(hWnd, windowTitle, sizeof(windowTitle) / sizeof(TCHAR));
    std::string title(windowTitle);

    if (!IsWindowVisible(hWnd) || title.empty() || title == "Alacritty" || title == "Program Manager" || title == "Setup" || title == "Windows Input Experience" || title == "Task Switching")
    {
        return TRUE;
    }

    //std::cout << title << std::endl;
    ShowWindow(hWnd, SW_MINIMIZE);

    return TRUE;
}

int main()
{
    EnumWindows(EnumWindowsProc, 0);
    return 0;
}
