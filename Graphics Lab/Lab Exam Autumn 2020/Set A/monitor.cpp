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
    rectangle(150,100,450,300);
    setfillstyle(1,0);
    floodfill(151,101,0);

    setcolor(15);
    rectangle(160,110,440,280);
    setfillstyle(1,15);
    floodfill(161,121,15);

    setcolor(15);
    circle(300,290,5);
    setfillstyle(1,15);
    floodfill(301,291,15);

    setcolor(0);
    rectangle(290,300,310,320);
    setfillstyle(1,0);
    floodfill(291,301,0);

    setcolor(0);
    ellipse(300,325,0,360,50,5);
    setfillstyle(1,0);
    floodfill(301,326,0);

    getchar();
    closegraph();
    return 0;
}















