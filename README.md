# PreventAutoLock
Prevents Windows and Linux From locking your PC. Many corporations force their employees computers to lock after being left idle. These small programs simply double tap the number lock key every 60 seconds. This makes the operating system think the computer is not idle. 

## Windows Users:
  * Press "Windows key + r"
  * Type shell:startup
  * Create a shortcut to noLock.exe in the startup folder
  * Reboot
  
## Linux Users (only tested on Ubuntu):
  * Run the command: sudo apt install xdotool
  * Run the command: chmod 755 noLock.sh
  * Open "Startup Applications"
  * Click Add
  * Name: noLock
  * Command: /path/to/noLock.sh
  * Comment: Prevents Screen From Idling
  * Click Save
  * Reboot
