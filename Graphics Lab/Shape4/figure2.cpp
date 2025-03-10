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
    //circle
    int rx1 = 290,ry1 = 100, rx2 = 315, ry2 = 170;
    setcolor(BLACK);
    rectangle(rx1,ry1,rx2-7,ry2);
    setfillstyle(1,0);
    floodfill(291,101,0);
    // the head part
    ellipse(300,190,0,180,60,20);
    line(240,190,360,190);
    setfillstyle(1,0);
    floodfill(300,180,0);
    rectangle(240,190,360,200);
    setfillstyle(1,0);
    floodfill(241,191,0);

    //water drops
   // setlinestyle(0,0,7);
    circle(270,220,7);
    circle(300,220,7);
    circle(330,220,7);
    floodfill(270,221,0);
    floodfill(300,221,0);
    floodfill(330,221,0);
    circle(265,250,7);
    circle(300,250,7);
    circle(335,250,7);
    floodfill(265,251,0);
    floodfill(300,251,0);
    floodfill(335,251,0);
    circle(255,290,7);
    circle(300,290,7);
    circle(345,290,7);
    floodfill(255,291,0);
    floodfill(300,291,0);
    floodfill(345,291,0);
    circle(250,330,7);
    circle(300,330,7);
    circle(350,330,7);
    floodfill(250,331,0);
    floodfill(300,331,0);
    floodfill(350,331,0);
    getchar();
    closegraph();
    return 0;
}










