#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm," ");

    int left = 100,top = 50, right = 500,bottom = 450;
    //White Background
    setcolor(WHITE);
    rectangle(left,top,right,bottom);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    //House
    //setlinestyle(0,0,5);
    setcolor(0);
    int a = 300, b = 150;
    line(a,b,a-100,b+50);
    line(a,b,a+100,b+50);
    //
    line(a,b+20,a-65,b+50);
    line(a,b+20,a+65,b+50);
    //
    line(a-65,b+50,a-65,b+130);
    line(a+65,b+50,a+65,b+130);
    line(a-65,b+130,a+65,b+130);
    //
    line(a-65,b+70,a-100,b+85);
    line(a-100,b+85,a-100,b+130);
    line(a-100,b+130,a-65,b+130);
    //
    line(a+65,b+70,a+100,b+85);
    line(a+100,b+85,a+100,b+130);
    line(a+100,b+130,a+65,b+130);
    //door
    rectangle(a-20,b+90,a+20,b+130);

    getchar();
    closegraph();
    return 0;
}











