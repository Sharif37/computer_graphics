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

    setcolor(WHITE);
    rectangle(140,100,310,290);
    setfillstyle(1,WHITE);
    floodfill(141,101,WHITE);

    setcolor(BLACK);
    line(150,150,300,150);
    line(150,150,225,110);
    line(300,150,225,110);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(260,130,BLACK);

    setcolor(BLACK);
    rectangle(150,150,300,154);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(151,151,BLACK);

    setcolor(BLACK);
    rectangle(155,160,295,168);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(161,161,BLACK);

    setcolor(BLACK);
    rectangle(165,175,190,248);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(168,185,BLACK);

    setcolor(BLACK);
    rectangle(212,175,238,248);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(224,185,BLACK);

    setcolor(BLACK);
    rectangle(260,175,285,248);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(264,185,BLACK);

    setcolor(BLACK);
    rectangle(155,258,295,266);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(161,260,BLACK);

    setcolor(BLACK);
    rectangle(150,271,300,279);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(161,275,BLACK);

    getchar();
    return 0;
}


