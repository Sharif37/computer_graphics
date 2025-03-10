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

    setcolor(BLACK);
    ellipse(330,190,0,360,5,10);
    setfillstyle(1,0);
    floodfill(331,191,0);


    setcolor(BLACK);
    setlinestyle(0,0,2);
    circle(300,230,100);
    arc(270,191,0,180,10);
    setlinestyle(0,0,5);
    arc(300,250,160,340,30);





    //setlinestyle(0,0,5);
    //setcolor(0);



    getchar();
    closegraph();
    return 0;
}









