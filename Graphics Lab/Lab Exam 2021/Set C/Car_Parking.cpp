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
    setlinestyle(0,0,1);
    line(300,150,200,200);
    line(300,150,400,200);
    line(200,200,170,200);
    line(400,200,430,200);
    line(170,200,170,220);
    line(430,200,430,220);
    line(170,220,430,220);
    line(200,220,200,350);
    line(200,350,170,350);
    line(400,220,400,350);
    line(400,350,430,350);
    rectangle(240,300,360,340);
    rectangle(260,340,280,350);
    rectangle(340,340,320,350);
    circle(270,320,7);
    circle(330,320,7);
    line(290,320,310,320);
    line(250,300,260,270);
    line(350,300,340,270);
    line(260,270,340,270);
    //
    rectangle(280,200,285,205);
    setfillstyle(1,0);
    floodfill(281,201,0);
    //
    rectangle(300,200,305,205);
    setfillstyle(1,0);
    floodfill(301,201,0);
    //
    rectangle(320,200,325,205);
    setfillstyle(1,0);
    floodfill(321,201,0);

    getchar();
    closegraph();
    return 0;
}




