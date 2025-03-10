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

    //white background
    setcolor(WHITE);

    rectangle(100,50,500,450);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    //---------------------------window 1
    setcolor(0);
     setlinestyle(0,0,3);
    rectangle(180,130,430,330);
    rectangle(200,150,410,300);
    circle(305,315,10);
    //-------------------------monitor stand
    rectangle(275,330,330,350);
    rectangle(230,350,380,360);



    getchar();
    closegraph();
    return 0;
}














