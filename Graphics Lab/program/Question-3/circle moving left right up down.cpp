#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    
    initwindow(500,500);
    int radius = 50;
    int x = 120, y = 240;
    char ch;
    

    while (1) {
        cleardevice(); //clear the graphics window and fill it with the current background color.
        circle(x, y, radius);
        ch = getch();
        if (ch == 'l') {
            x -= 15;
        } else if (ch == 'r') {
            x += 15;
        } else if (ch == 'u') {
            y -= 15;
        } else if (ch == 'd') {
            y += 15;
        }
    }
    getch();
    closegraph();
    return 0;
}
