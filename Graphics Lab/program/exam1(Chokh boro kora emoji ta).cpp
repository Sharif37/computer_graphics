#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    initwindow(600,600);

    int left = 100,top = 50, right = 500,bottom = 450;
    //White Background
    setcolor(WHITE);
    rectangle(left,top,right,bottom);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    setlinestyle(0,0,3);
    setcolor(0);
    circle(300,300,100);
    circle(255,280,25);
    circle(340,280,25);
    arc(255,265,70,150,30);
    arc(340,265,30,120,30);
    line(280,350,320,350);
    setcolor(0);
    circle(255,280,5);
    circle(340,280,5);
     setfillstyle(1,0);
    floodfill(255,281,0);
    floodfill(340,281,0);

    getchar();
    closegraph();
    return 0;
}










