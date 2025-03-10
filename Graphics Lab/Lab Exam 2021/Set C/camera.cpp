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
    arc(210,210,90,180,10);
    line(200,210,200,290);
    arc(210,290,180,270,10);
    line(210,300,360,300);
    arc(360,290,270,360,10);
    line(370,290,370,210);
    arc(360,210,0,90,10);
    line(360,200,340,197);
    ellipse(350,196,0,360,7,4);
    line(340,197,330,187);
    //------------------------------
    arc(320,190,16,90,10);
    line(320,180,280,180);
    arc(280,190,90,180,10);
    line(270,190,267,195);
    line(267,195,237,200);
    line(237,200,234,197);
    line(234,197,204,200);
    //---------------------------
    setlinestyle(1,1,3);
    line(237,200,237,300);
    setlinestyle(0,0,3);
    circle(215,220,6);
    circle(300,240,35);
    circle(300,240,25);
    arc(335,240,270,90,10);




    getchar();
    closegraph();
    return 0;
}



