#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm," ");
    int w=getmaxx();
    int h=getmaxy();

     //White background
    setcolor(WHITE);
    rectangle(160,100,600,400);
    setfillstyle(1,WHITE);
    floodfill(161,101,WHITE);
    //black rectangle
    setcolor(BLACK);
    rectangle(200,140,420,360);
    setfillstyle(1,BLACK);
    floodfill(201,141,BLACK);

    setcolor(WHITE);
    rectangle(210,150,410,350);
    setfillstyle(1,WHITE);
    floodfill(211,151,15);


    setcolor(BLACK);
    rectangle(210,180,410,190);
    setfillstyle(1,BLACK);
    floodfill(211,181,BLACK);
 //INNER RECTANGE
    setcolor(BLACK);
    rectangle(230,220,390,330);
    setfillstyle(1,BLACK);
    floodfill(241,221,BLACK);

    setcolor(WHITE);
    rectangle(240,230,380,320);
    setfillstyle(1,WHITE);
    floodfill(241,231,15);
    //horizontal techtangles
    setcolor(BLACK);
    rectangle(230,255,390,265);
    setfillstyle(1,BLACK);
    floodfill(241,256,BLACK);

    setcolor(BLACK);
    rectangle(230,290,390,300);
    setfillstyle(1,BLACK);
    floodfill(241,291,BLACK);

    //vertical lines
    setcolor(BLACK);
    rectangle(270,220,280,330);
    setfillstyle(1,BLACK);
    floodfill(275,230,BLACK);
    floodfill(275,270,BLACK);
    floodfill(275,310,BLACK);

    setcolor(BLACK);
    rectangle(310,220,320,330);
    setfillstyle(1,BLACK);
    floodfill(315,230,BLACK);
    floodfill(315,270,BLACK);
    floodfill(315,310,BLACK);

    setcolor(BLACK);
    rectangle(345,220,355,330);
    setfillstyle(1,BLACK);
    floodfill(350,230,BLACK);
    floodfill(350,270,BLACK);
    floodfill(350,310,BLACK);
    //circle
    setcolor(15);
    circle(380,330,60);
    setfillstyle(1,15);
    floodfill(370,330,15);
    floodfill(420,330,15);

    setcolor(0);
    circle(380,330,50);
    setfillstyle(1,0);
    floodfill(370,330,0);

    setcolor(15);
    circle(380,330,40);
    setfillstyle(1,15);
    floodfill(370,330,15);

    setcolor(0);
    rectangle(355,325,405,335);
    setfillstyle(1,0);
    floodfill(370,330,0);

    setcolor(0);
    rectangle(375,305,385,355);
    setfillstyle(1,0);
    floodfill(376,306,0);
    floodfill(376,354,0);

    //upper rctangles

    setcolor(0);
    rectangle(240,120,270,170);
    setfillstyle(1,0);
    floodfill(241,121,0);
    floodfill(241,168,0);

    setcolor(15);
    rectangle(250,130,260,160);
    setfillstyle(1,15);
    floodfill(251,131,15);
    floodfill(251,158,15);


    setcolor(0);
    rectangle(350,120,380,170);
    setfillstyle(1,0);
    floodfill(351,121,0);
    floodfill(351,168,0);

    setcolor(15);
    rectangle(360,130,370,160);
    setfillstyle(1,15);
    floodfill(361,131,15);
    floodfill(361,158,15);



    getchar();
    closegraph();
    return 0;
}




