#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = getmaxx()/2, y = getmaxy()/2;
    char ch;
    while (1) {
        cleardevice();
        circle(x, y, 50);
        ch = getch();
        if (ch == 'l') {
            x = 50;
        } else if (ch == 'r') {
            x = getmaxx()-50;
        } else if (ch == 'u') {
            y = 50;
        } else if (ch == 'd') {
            y = getmaxy()-50;
        }
        else if (ch == 'm') {
            x = getmaxx()/2;
            y = getmaxy()/2;
        }
    }
    getch();
    closegraph();
    return 0;
}
