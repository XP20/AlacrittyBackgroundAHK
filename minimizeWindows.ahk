#NoEnv
SendMode Input
DetectHiddenWindows, Off

focused := false

while (true)
{
    ; Due to minimizing normally would need 2 Tabs to alt tab
    if (GetKeyState("LAlt", "P") && GetKeyState("Tab", "P")) {
        KeyWait Tab
        Sleep, 50
        Send {Tab}
    }
  
    ; On unfocus show taskbar
    WinGetTitle, Title, A
    if (Title != "Alacritty" && Title != "Task Switcher" && !GetKeyState("LAlt", "P"))
    {
        if (focused) {
            Sleep, 200
            Run "showTask.exe"
        }
        focused := false
    }
    
    ; On focus, minimize other apps and hide taskbar
    if (Title == "Alacritty" && !GetKeyState("LAlt", "P"))
    {
        Run "minimize.exe"
        if (!focused) {
            Run "hideTask.exe"
        }
        focused := true
    }
    
    Sleep, 500
}
