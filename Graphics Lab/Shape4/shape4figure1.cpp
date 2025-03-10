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

    //-----------------the pipe
    setcolor(0);
    rectangle(101,90,310,110);
    setfillstyle(1,0);
    floodfill(104,91,0);

    setcolor(0);
    rectangle(290,90,310,150);
    setfillstyle(1,0);
    floodfill(291,120,0);

    setcolor(0);
    //circle(300,190,50);
    ellipse(300,190,0,180,50,50);
    line(250,190,350,190);
    setfillstyle(1,0);
    floodfill(300,180,0);

    setcolor(0);
    ellipse(300,210,0,360,5,8);  //water drop
    setfillstyle(1,0);
    floodfill(300.5,211,0);

    setcolor(0);
    ellipse(300,210,0,360,5,8);
    setfillstyle(1,0);
    floodfill(300.5,211,0);




   //------------------------------------------
    setlinestyle(0,0,10);
    setcolor(0);

    getchar();
    closegraph();
    return 0;
}











