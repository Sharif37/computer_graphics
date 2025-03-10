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
    //eye
    setcolor(BLACK);
    //setlinestyle(0,0,5);
    int rx = 250, ry = 250;
   // arc(rx,ry,20,160,50);
    arc(rx,ry,0,180,30);
    line(rx-30,ry,rx+30,ry);
    setfillstyle(1,0);
    floodfill(rx-1,ry-1,0);
    // the white portion
    setcolor(0);
    rectangle(rx-30,ry+10,rx+30,ry+20);
    setfillstyle(1,0);
    floodfill(rx-30+1,ry+10+5,0);
    //
    arc(rx,ry+20,180,360,30);
    line(rx,ry+20,rx+20,ry+20);
    setfillstyle(1,0);
    floodfill(rx+1,ry+21,0);
    // the stand part
    setlinestyle(0,0,7);
    arc(rx,ry+20,180,360, 45);
    rectangle(rx-3,ry+20+45,rx+4,ry+100);
    rectangle(rx-20,ry+100,rx+20,ry+107);




    getchar();
    closegraph();
    return 0;
}








