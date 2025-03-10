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
    setlinestyle(0,0,5);
    int rx = 300, ry = 300;
   // arc(rx,ry,20,160,50);
    ellipse(rx,ry,20,160,75,40);
    ellipse(rx,ry-25,200,340,75,40);
    circle(rx,ry-14,15);
    line(rx-40,ry+30,rx+40,ry-60);



    getchar();
    closegraph();
    return 0;
}







