#include <graphics.h>
#include <windows.h>  // Required for GetCursorPos() and GetAsyncKeyState()
#include <conio.h>    // Required for _kbhit()

int main() {
    // Initialize graphics window
    int width = 800, height = 600;
    initwindow(width, height, "Mouse Follower");

    POINT cursorPos;

    while (1) {
        cleardevice(); // Clear the previous frame
        
        // Get the current cursor position
        GetCursorPos(&cursorPos);
        ScreenToClient(GetForegroundWindow(), &cursorPos); // Convert screen to window coordinates

        // Draw a circle at the cursor position
        circle(cursorPos.x, cursorPos.y, 30);

        // Exit if Enter key (VK_RETURN) is pressed
        if (GetAsyncKeyState(VK_RETURN) & 0x8000)  
            break;

        delay(10); // Small delay to avoid CPU overuse
    }

    closegraph(); // Close graphics window
    return 0;
}
