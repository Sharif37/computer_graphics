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
    rectangle(160,100,400,400);
    setfillstyle(1,WHITE);
    floodfill(161,101,WHITE);

    setcolor(BLACK);
    rectangle(180,280,360,380);
    setfillstyle(1,BLACK);
    floodfill(182,283,BLACK);

    setcolor(WHITE);
    rectangle(190,290,350,370);
    setfillstyle(1,WHITE);
    floodfill(192,293,WHITE);
    //VERTICAL LINES
    setcolor(BLACK);
    rectangle(215,290,225,370);
    setfillstyle(1,BLACK);
    floodfill(216,293,BLACK);

    setcolor(BLACK);
    rectangle(235,290,245,370);
    setfillstyle(1,BLACK);
    floodfill(236,293,BLACK);

    setcolor(BLACK);
    rectangle(255,290,265,370);
    setfillstyle(1,BLACK);
    floodfill(256,293,BLACK);

    setcolor(BLACK);
    rectangle(275,290,285,370);
    setfillstyle(1,BLACK);
    floodfill(276,293,BLACK);

    setcolor(BLACK);
    rectangle(295,290,305,370);
    setfillstyle(1,BLACK);
    floodfill(296,293,BLACK);

    setcolor(BLACK);
    rectangle(315,290,325,370);
    setfillstyle(1,BLACK);
    floodfill(316,293,BLACK);
    //HORIZONTAL LINES
    setcolor(BLACK);
    rectangle(190,305,215,315);
    setfillstyle(1,BLACK);
    floodfill(192,308,BLACK);

    setcolor(BLACK);
    rectangle(245,305,255,315);
    setfillstyle(1,BLACK);
    floodfill(246,308,BLACK);

    setcolor(BLACK);
    rectangle(285,305,295,315);
    setfillstyle(1,BLACK);
    floodfill(286,308,BLACK);

    setcolor(BLACK);
    rectangle(325,305,350,315);
    setfillstyle(1,BLACK);
    floodfill(330,308,BLACK);
    //UPPER RECTANGLE
    setcolor(BLACK);
    rectangle(200,260,340,282);
    setfillstyle(1,BLACK);
    floodfill(202,263,BLACK);

    setcolor(WHITE);
    rectangle(210,270,330,280);
    setfillstyle(1,WHITE);
    floodfill(212,273,WHITE);
    //TRIANGLE PART
    setcolor(BLACK);
    rectangle(210,230,330,270);
    setfillstyle(1,BLACK);
    floodfill(230,233,BLACK);

    setcolor(WHITE);
    line(220,260,320,260);
    line(220,260,270,240);
    line(320,260,270,240);
    setfillstyle(1,WHITE);
    floodfill(270,243,WHITE);
    //erasing part 1
    setcolor(WHITE);
    line(200,260,270,230);
    line(200,260,200,230);
    line(200,230,270,230);
    setfillstyle(1,WHITE);
    floodfill(210,233,WHITE);
    //erasing part 2
    setcolor(WHITE);
    line(340,260,270,230);
    line(340,260,334,230);
    line(340,230,270,230);
    setfillstyle(1,WHITE);
    floodfill(300,233,WHITE);
    //the flag portion
    setcolor(BLACK);
    rectangle(265,175,275,235);
    setfillstyle(1,BLACK);
    floodfill(266,200,BLACK);

    setcolor(BLACK);
    rectangle(265,175,320,210);
    setfillstyle(1,BLACK);
    floodfill(280,188,BLACK);

    setcolor(WHITE);
    rectangle(275,185,310,200);
    setfillstyle(1,WHITE);
    floodfill(280,188,WHITE);

    getchar();
    return 0;
}



