// Ben Girone    2/26/19    benjamingirone@gmail.com

// Because the SendInput function is only supported in
// Windows 2000 and later, WINVER needs to be set as
// follows so that SendInput gets defined when windows.h
// is included below.
#define WINVER 0x0500
#include <windows.h>

void pressKey(char keyCode)
{
    // This structure will be used to create the keyboard
    // input event.
    INPUT ip;

    // Set up a generic keyboard event.
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0; // hardware scan code for key
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;

    // Press the key
    ip.ki.wVk = keyCode; // virtual-key code for the key
    ip.ki.dwFlags = 0; // 0 for key press
    SendInput(1, &ip, sizeof(INPUT));

    // Release the key
    ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
    SendInput(1, &ip, sizeof(INPUT));
}

int main()
{
    // Loop infinitely
    while(true)
    {
        // Call key press
        pressKey(0x90);
        pressKey(0x90);

        Sleep(59000);
    }
    // Exit normally
    return 0;
}
