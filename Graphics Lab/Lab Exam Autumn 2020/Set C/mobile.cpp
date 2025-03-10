
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
    //---------------------------the signal portion
    setcolor(0);
    rectangle(320,175,330,200);
    setfillstyle(1,0);
    floodfill(321,176,0);

    arc(315,177,90,270,6);
    arc(315,177,90,270,10);

    arc(335,177,270,90,6);
    arc(335,177,270,90,10);
    //--------------------------the main body

    setcolor(0);
    rectangle(250,200,350,370);
    setfillstyle(1,0);
    floodfill(251,201,0);

    setcolor(15);
    rectangle(260,210,340,260);
    setfillstyle(1,15);
    floodfill(261,221,15);
    //---------------------------Buttons
    setcolor(15);
    rectangle(260,280,280,290);
    setfillstyle(1,15);           //1
    floodfill(261,281,15);

    setcolor(15);
    rectangle(290,280,310,290);
    setfillstyle(1,15);          // 2
    floodfill(291,281,15);

    setcolor(15);
    rectangle(320,280,340,290);
    setfillstyle(1,15);         // 3
    floodfill(321,281,15);

    setcolor(15);
    rectangle(260,300,280,310);
    setfillstyle(1,15);           //4
    floodfill(261,301,15);

    setcolor(15);
    rectangle(290,300,310,310);
    setfillstyle(1,15);          // 5
    floodfill(291,301,15);

    setcolor(15);
    rectangle(320,300,340,310);
    setfillstyle(1,15);         // 6
    floodfill(321,301,15);

    setcolor(15);
    rectangle(260,320,280,330);
    setfillstyle(1,15);           //7
    floodfill(261,321,15);

    setcolor(15);
    rectangle(290,320,310,330);
    setfillstyle(1,15);          // 8
    floodfill(291,321,15);

    setcolor(15);
    rectangle(320,320,340,330);
    setfillstyle(1,15);         // 9
    floodfill(321,321,15);

    setcolor(15);
    rectangle(260,340,280,350);
    setfillstyle(1,15);           //10
    floodfill(261,341,15);

    setcolor(15);
    rectangle(290,340,310,350);
    setfillstyle(1,15);          //11
    floodfill(291,341,15);

    setcolor(15);
    rectangle(320,340,340,350);
    setfillstyle(1,15);         //12
    floodfill(321,341,15);

    //----------------





    getchar();
    closegraph();
    return 0;
}

















