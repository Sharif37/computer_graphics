#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    // int gd,gm;
    // detectgraph(&gd,&gm);
    // initgraph(&gd,&gm," ");
    initwindow(600,600);

    //white background
    setcolor(WHITE);
    rectangle(100,50,500,450);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    //---------------------------
    setcolor(0);
    rectangle(150,200,450,350);
    setfillstyle(1,0);
    floodfill(151,201,0);

    setcolor(15);
    rectangle(155,205,445,345);
    setfillstyle(1,15);
    floodfill(161,221,15);

    //----------------
    setcolor(0);
    setlinestyle(0,0,10);
    rectangle(260,170,340,204);
    setlinestyle(0,0,5);
    circle(210,270,30);
    circle(210,270,15);
    circle(390,270,30);
    circle(390,270,15);
    //---------------------
    setlinestyle(0,0,10);
    rectangle(270,245,330,250);
    //line(270,250,330,250);
    rectangle(270,260,330,290);
    rectangle(270,300,330,305);


    getchar();
    closegraph();
    return 0;
}
















