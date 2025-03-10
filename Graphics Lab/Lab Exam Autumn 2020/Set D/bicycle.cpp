
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
    //setlinestyle(0,0,3);
    circle(230,250,40);
    circle(350,250,40);
    circle(290,250,10);
    line(230,250,280,250);
    line(230,250,255,200);
    line(285,243,255,200);
    line(255,200,248,190);
    line(240,190,260,190);
    //----------------
    line(295,240,320,200);
    line(350,250,320,200);
    line(320,200,315,190);
    line(315,190,335,175);


    getchar();
    closegraph();
    return 0;
}



















