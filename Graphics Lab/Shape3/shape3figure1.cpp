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

    setcolor(BLACK);
    rectangle(248.5,250,251.5,225);
    setfillstyle(1,0);
    floodfill(249.5,247,0);


    setlinestyle(0,0,5);
    setcolor(0);
    line(250,250,275,270);
    line(225,270,250,250);
    line(250,250,250,225);
    line(275,200,275,175);
    line(250,225,275,200);
    line(275,200,300,225);
    line(300,225,300,250);   //horizontal line
    line(300,250,325,275);
    line(325,275,350,250);
    line(350,250,350,225);   //horizontal line
    line(325,275,325,300);   // horizontal line
    line(325,300,350,325);
    line(350,325,375,300);
    line(375,300,375,275);


    getchar();
    closegraph();
    return 0;
}








