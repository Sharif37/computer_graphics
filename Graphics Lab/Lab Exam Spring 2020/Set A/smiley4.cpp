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
    ellipse(287,208,0,360,5,6); //eye ball 1
    setfillstyle(1,0);
    floodfill(288,209,0);

    setcolor(0);
    ellipse(313,208,0,360,5,6); // eye ball 2
    setfillstyle(1,0);
    floodfill(314,209,0);


    setcolor(BLACK);
    setlinestyle(0,0,2);
    ellipse(280,200,0,360,13,17);
    ellipse(320,200,0,360,13,17);
    //arc(280,200,45,120,20);
    line(290,190,270,175);
    line(310,190,330,175);
    circle(300,230,100); //main circle
    //circle(240,190,40);  //goggles part 1
   // circle(360,190,40);  //goggles part 2
    //arc(300,190,35,145,30); // the glass holder
    //line(260,245,340,245);
    arc(300,280,30,150,40);
    arc(300,300,190,350,7);

    setlinestyle(0,0,3);



    getchar();
    closegraph();
    return 0;
}












