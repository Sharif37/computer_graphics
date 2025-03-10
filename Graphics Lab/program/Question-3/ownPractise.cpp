#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int radius = 50;
    int x = 120, y = 240;
    char ch;
    char str[100];
    char left[] = "left";
    char right[] = "right";
    char up[] = "up";
    char down[] = "down";



    initgraph(&gd, &gm, "");

    while (1) {
        cleardevice(); //clear the graphics window and fill it with the current background color.
        circle(x, y, radius);
        //ch = getch();
        scanf("%s",str);
        if (strcmp(str, left) == 0) {
            x -= 15;
        } else if (strcmp(str, right)== 0) {
            x += 15;
        } else if (strcmp(str, up)== 0) {
            y -= 15;
        } else if (strcmp(str, down)== 0) {
            y += 15;
        }
    }
    getch();
    closegraph();
    return 0;
}
