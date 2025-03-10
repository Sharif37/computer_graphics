#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int radius = 50;
    int x = 320, y = 240;
    char ch;
    initgraph(&gd, &gm, "");

    while (1) {
        cleardevice();
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
