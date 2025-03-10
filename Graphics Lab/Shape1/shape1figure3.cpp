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



    getchar();
    return 0;
}




