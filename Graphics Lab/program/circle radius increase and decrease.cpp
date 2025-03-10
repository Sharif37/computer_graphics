#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    int radius = 10,in;
    scanf("%d",&in);
    char ch;
    initgraph(&gd, &gm, "");
    int i = 0;
    while (i<=in) {

        //cleardevice();
        if(radius<0)
        {
          outtextxy(100,100,"the radius is less than zero");

        }
        circle(250, 250, radius);
        //ch = getch();
        radius = radius * in;
        i++;
        /*if (ch == 'i') {
            radius += 15;
        } else if (ch == 'd') {
            radius -= 15;
        }
         else if (ch == '+') {
            radius += 15;*/
        }

    getch();
    closegraph();
    return 0;
}
