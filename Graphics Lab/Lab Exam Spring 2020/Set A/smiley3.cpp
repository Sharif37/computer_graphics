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

    setcolor(0);
    circle(250,200,5);    //eye 1
    setfillstyle(1,0);
    floodfill(251,201,0);

    setcolor(0);
    circle(350,200,5);    //eye 2
    setfillstyle(1,0);
    floodfill(351,201,0);


    setcolor(BLACK);
    setlinestyle(0,0,2);
    circle(300,230,100); //main circle
    //circle(240,190,40);  //goggles part 1
   // circle(360,190,40);  //goggles part 2
    //arc(300,190,35,145,30); // the glass holder
    line(260,245,340,245);
    arc(300,240,190,350,40);

    setlinestyle(0,0,3);



    getchar();
    closegraph();
    return 0;
}











