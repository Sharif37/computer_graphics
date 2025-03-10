
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

    //White Background
    setcolor(WHITE);
    rectangle(100,50,500,450);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    //---------------------------The Main Body
    setcolor(0);
    circle(300,250,60);
    setfillstyle(1,0);
    floodfill(301,251,0);
    //----------------------
    setlinestyle(0,0,5);
    rectangle(298,170,303,330);
    rectangle(220,248,380,253);
    setcolor(15);
    rectangle(298,190,303,308);
    rectangle(243,248,358,253);


    getchar();
    closegraph();
    return 0;
}

