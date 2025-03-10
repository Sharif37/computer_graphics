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

    //................................................
    setcolor(0);
    circle(180,150,50);    //the first circle one black part
    setfillstyle(1,0);
    floodfill(181,151,0);

    setcolor(0);
    circle(270,150,50);    //the second circle black part
    setfillstyle(1,0);
    floodfill(271,141,0);

      setcolor(15);
    circle(180,150,40);    //the first circle one white part
    setfillstyle(1,15);
    floodfill(181,151,15);

    setcolor(15);
    circle(270,150,40);    //the second circle white part
    setfillstyle(1,15);
    floodfill(271,141,15);
    //-----------------------------------------------------
    setcolor(0);
    rectangle(130,200,320,300);       //the main box black one
    setfillstyle(1,0);
    floodfill(181,201,0);

    setcolor(15);
    rectangle(140,210,310,290);       //the main box white one
    setfillstyle(1,15);
    floodfill(191,211,15);
    //-------------------------------------- the front part
    setcolor(0);
    rectangle(380,180,390,320);       //the main box black one
    setfillstyle(1,0);
    floodfill(381,201,0);

    //---------------the stand part: middle one
    setcolor(0);
    rectangle(215,300,225,370);       //the main box black one
    setfillstyle(1,0);
    floodfill(216,301,0);

    setlinestyle(0, 0, 10);
    setcolor(0);
    line(380, 180, 310, 205);
    line(390, 320, 310, 295);

    //------------------the stand part : the diagonal one's

    line(220,300,150,366);
    line(220,300,290,366);




    getchar();
    closegraph();
    return 0;
}






