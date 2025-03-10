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
    rectangle(270,150,330,190);
    line(300,150,300,190);
    line(270,170,330,170);

    //---------------------------window 2
    setcolor(0);
    rectangle(170,230,230,270);
    line(200,230,200,270);
    line(170,250,230,250);
    //---------------------------window 2
    setcolor(0);
    rectangle(370,230,430,270);
    line(400,230,400,270);
    line(370,250,430,250);
    //---------------------------door
    rectangle(270,250,330,350);
    circle(280,310,5);


    setcolor(0);
    //.....................
    line(300,90,110,195);
    line(300,90,490,195);
    line(300,100,120,200); // the upper part
    line(300,100,480,200);
    line(110,195,120,200);
    line(490,195,480,200);
    //---------------------------
    line(400,110,400,145);
    line(430,110,430,160);
    line(400,110,430,110);
    line(400,105,430,105);    //the tower part
    line(400,110,400,105);
    line(430,105,430,110);
    //-----------------------------
    line(135,193,135,350);
    line(465,193,465,350);
    line(135,350,465,350);

    getchar();
    closegraph();
    return 0;
}













