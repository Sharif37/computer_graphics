#include <graphics.h>
#include <math.h>
#include<stdio.h>
int main()
{
     initwindow(600,600);
    setbkcolor(15);
    cleardevice();
    int x1 = 100, y1 = 50, x2 = 200, y2 = 250;  // coordinates of two points of line 1
    int x3 = 50, y3 = 100, x4 = 200, y4 = 150;  // coordinates of two points of line 2
    int a1 = y2 - y1, b1 = x1 - x2, c1 = a1 * x1 + b1 * y1;
    int a2 = y4 - y3, b2 = x3 - x4, c2 = a2 * x3 + b2 * y3;
    int determinant = a1 * b2 - a2 * b1;

    setcolor(LIGHTBLUE);
    setlinestyle(0,0,3);
    line(x1,y1,x2,y2);
    setcolor(LIGHTCYAN);
    line(x3,y3,x4,y4);
    if (determinant == 0)
    {
        outtextxy(200,200,"Lines are parallel.");
        //printf("Lines are parallel.");
    }
    else
    {
        int x = (b2 * c1 - b1 * c2) / determinant;
        int y = (a1 * c2 - a2 * c1) / determinant;
        printf("Intersection point :(%d,%d)",x,y);
        setcolor(RED);
        circle(x, y, 5);
    }

    getch();
    closegraph();
}
