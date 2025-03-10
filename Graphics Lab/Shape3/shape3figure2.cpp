#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm," ");

    //white background
    setcolor(WHITE);
    rectangle(100,50,500,450);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);


    setlinestyle(0,0,5);
    setcolor(0);
    line(150,250,450,250);
    //------------------------------------
    line(150,250,300,50);  //line 1
    line(300,50,450,250);  //line 2
    line(150,250,300,450); //line 3
    line(300,450,450,250);  //line 4
    //-------------------------------------
    line(200,250,300,100);
    line(300,100,400,250);
    line(200,250,300,400);
    line(300,400,400,250);

    //-----------------------------------
    line(225,150,375,350);
    line(375,150,225,350);
    line(300,100,300,400);


    getchar();
    closegraph();
    return 0;
}









