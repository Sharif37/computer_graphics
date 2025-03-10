#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm," ");

    int left = 100,top = 50, right = 500,bottom = 500;
    //White Background
    setcolor(WHITE);
    rectangle(left,top,right,bottom);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    //setlinestyle(0,0,3);
    //
    setcolor(0);
    int x1 = 150,y1 = 300,x2 = 350,y2 = 300;
    line(150,300,350,300);
    line(350,300,370,270);
    line(370,270,410,270); // upper part
    line(150,300,165,400);
    line(165,400,390,400); // lower line
    line(390,400,390,270);
    //
    line(205,400,195,350);
    line(255,400,245,350);
    line(305,400,295,350);
    // the front part
    line(390,290,430,290);
    line(430,290,440,330);
    line(440,330,410,330);
    line(410,330,405,290);
    line(440,330,470,350);
    line(470,350,470,430);
    //
    line(490,430,130,430);
    circle(200,430,30);
    circle(420,430,30);
    setcolor(15);
    line(170,430,230,430);
    line(390,430,450,430);

    getchar();
    closegraph();
    return 0;
}











