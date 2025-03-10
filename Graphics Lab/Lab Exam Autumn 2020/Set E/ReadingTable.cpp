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
    setlinestyle(0,0,2);
    rectangle(270,150,320,200);
    line(285,160,285,190);
    line(295,160,295,190);
    line(305,160,305,190);
    rectangle(220,200,370,210);
    line(230,210,230,290);
    line(360,210,360,290);

    line(285,220,305,220); // drawer
    line(230,230,360,230); //drawer

    line(265,230,265,260);

    line(295,230,295,270); //drawer
    line(295,270,360,270); //drawer
    line(320,250,340,250);


    getchar();
    closegraph();
    return 0;
}



