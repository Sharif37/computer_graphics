
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
    setlinestyle(0,0,3);
    line(200,300,400,300);
    line(200,300,200,250);
    line(400,300,400,250);
    line(200,250,270,250);
    line(400,250,330,250);
    line(270,250,280,265);
    line(330,250,320,265);
    line(280,265,320,265);
    //-------------------------
    line(200,250,230,160);
    line(400,250,370,160);
    line(230,160,270,160);
    line(370,160,330,160);
    //------------------------------
    line(300,130,300,220);
    line(300,220,280,200);
    line(300,220,320,200);



    getchar();
    closegraph();
    return 0;
}


















