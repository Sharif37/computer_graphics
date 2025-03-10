
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
    rectangle(150,200,400,350);
    setfillstyle(1,0);
    floodfill(151,201,0);

    setcolor(15);
    rectangle(155,205,395,345);
    setfillstyle(1,15);
    floodfill(161,221,15);

    //----------------
    setcolor(0);
    setlinestyle(0,0,5);

    circle(210,255,15);
    arc(210,300,0,180,30);
    line(180,305,240,305);

    //---------------------
    setlinestyle(0,0,5);
    rectangle(270,240,340,245);
    //line(270,250,330,250);
    rectangle(270,260,340,265);
    rectangle(270,280,340,285);
    rectangle(270,300,300,305);


    getchar();
    closegraph();
    return 0;
}
















