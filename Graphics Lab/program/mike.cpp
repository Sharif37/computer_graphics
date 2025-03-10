#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm," ");
    //cleardevice();
    setbkcolor(WHITE);
    cleardevice();
    int left = 100,top = 50, right = 500,bottom = 450;
    //White Background
    //setcolor(WHITE);
   // rectangle(left,top,right,bottom);
   // setfillstyle(1,15);
   // floodfill(161,51,WHITE);
    //the upper portion
    setcolor(BLACK);



    int rx = 250, ry = 250;
    //ellipse(rx,ry-10,0,360,30,70);
   //the stand part
    setlinestyle(0,0,3);
    arc(rx,ry+20,180,360, 45);
    setlinestyle(0,0,7);
    rectangle(rx-3,ry+20+45,rx+4,ry+100);
    rectangle(rx-30,ry+100,rx+30,ry+107);

    setlinestyle(0,0,3);

   // circle(rx,ry-20,30);
    arc(rx,ry-20,0,180,30);
    line(rx-30,ry-20,rx-30,ry+20);
    line(rx+30,ry-20,rx+30,ry+20);
    arc(rx,ry+20,180,360,30);
    //ellipse(rx,ry-10,0,360,30,70);

    getchar();
    closegraph();
    return 0;
}








