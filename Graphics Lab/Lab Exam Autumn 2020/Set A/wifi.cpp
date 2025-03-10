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
   //-------------
    setcolor(0);
    circle(300,250,8);
    setfillstyle(1,0);
    floodfill(301,251,0);

    setcolor(0);
    setlinestyle(0,0,8);
    arc(300,250,45,135,20);
    arc(300,250,45,135,35);
    arc(300,250,45,135,50);


    getchar();
    closegraph();
    return 0;
}















