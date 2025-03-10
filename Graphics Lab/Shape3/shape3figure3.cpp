#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm," ");

    //white background
    setcolor(WHITE);
    rectangle(100,50,500,450);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);

    //----------------------------
    setlinestyle(0,0,3);
    setcolor(LIGHTCYAN);
    rectangle(120,70,480,430);

    setcolor(0);
    rectangle(130,80,470,420);
    //setfillstyle(1,LIGHTCYAN);
    // floodfill(161,71,LIGHTCYAN);
    setlinestyle(0,0,7);
    setcolor(BLACK);
    circle(300,250,150);
    line(150,250,200,250);
    line(400,250,450,250);
    line(200,250,300,380);
    line(400,250,300,380);

    getchar();
    closegraph();
    return 0;
}










