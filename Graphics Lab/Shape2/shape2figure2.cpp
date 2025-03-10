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
    //TRAPIJIUM
    /*
            ------
           -      -
           --------
    */
    setcolor(0);
    rectangle(250,100,350,110);
    setfillstyle(1,0);
    floodfill(261,101,0);

    setcolor(0);
    rectangle(210,120,390,130);
    setfillstyle(1,0);
    floodfill(261,121,0);

    setcolor(0);
    rectangle(174,180,432,190);
    setfillstyle(1,0);
    floodfill(181,181,0);


    //RECTANGLE
    setcolor(0);
    rectangle(200,185,400,350);
    setfillstyle(1,0);
    floodfill(201,191,0);

    setcolor(15);
    rectangle(210,195,390,340);
    setfillstyle(1,15);
    floodfill(211,196,15);

    setcolor(0);
    rectangle(178,215,420,225);
    setfillstyle(1,0);
    floodfill(181,216,0);
    floodfill(211,216,0);
    floodfill(401,216,0);

    setcolor(0);
    rectangle(420,215,430,250);
    setfillstyle(1,0);
    floodfill(421,230,0);

    setcolor(0);
    rectangle(420,250,460,260);
    setfillstyle(1,0);
    floodfill(431,256,0);

    //The middle part
    setcolor(0);
    rectangle(295,180,305,240);
    setfillstyle(1,0);
    floodfill(300,206,0);
    floodfill(300,236,0);

    setcolor(0);
    rectangle(270,240,330,250);
    setfillstyle(1,0);
    floodfill(290,246,0);

    setcolor(0);
    rectangle(280,300,320,310);
    setfillstyle(1,0);
    floodfill(290,301,0);

    //lower part
    setcolor(0);
    rectangle(180,340,420,400);
    setfillstyle(1,0);
    floodfill(419,349,0);

    setcolor(15);
    rectangle(190,350,410,390);
    setfillstyle(1,15);
    floodfill(191,351,15);

    setcolor(0);
    rectangle(190,360,410,370);
    setfillstyle(1,0);
    floodfill(191,361,0);



    //lines
    setcolor(BLACK);
    setlinestyle(0, 0, 10);
    line(210, 125, 175, 185);
    line(390, 125, 430, 185);
    // next 2 lines
    line(265, 240, 280, 310);
    line(330, 240, 320, 310);



    getchar();
    closegraph();
    return 0;
}




