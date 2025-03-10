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
    setlinestyle(0,0,2);
    circle(300,230,100); //main circle
    circle(240,190,40);  //goggles part 1
    circle(360,190,40);  //goggles part 2
    arc(300,190,35,145,30); // the glass holder
    arc(300,260,180,360,20);

    setlinestyle(0,0,3);
    line(245,200,255,200); //eye 1
    line(345,200,355,200); //eye 2

    //setlinestyle(0,0,5);
    //arc(300,250,160,340,30);





    //setlinestyle(0,0,5);
    //setcolor(0);



    getchar();
    closegraph();
    return 0;
}










