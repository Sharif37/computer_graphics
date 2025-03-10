
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
    rectangle(250,150,350,170); // first part
    rectangle(230,170,370,190);
    rectangle(240,190,360,260);
    rectangle(280,220,320,260);  //door
    //--------------------------
    rectangle(250,205,270,230);
    rectangle(330,205,350,230);
    getchar();
    closegraph();
    return 0;
}


