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

    int left = 100,top = 50, right = 500,bottom = 450;
    //White Background
    setcolor(WHITE);
    rectangle(left,top,right,bottom);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    //--------------------------- the lower part
    int x1 = 200, y1 = 350, x2 = 400, y2 = 350;
    setcolor(0);
    setlinestyle(0,0,5);
    line(x1,y1,x2,y2);
    arc(x1,y1-10,180,270,10);
    arc(x2,y2-10,270,360,10);
    //
    line(x1-10,y1-10,x1-10,y1-120); //left side
    line(x2+10,y2-10,x2+10,y2-120); //right side
    arc(x1,y1-120,90,180,10); //curve of left side
    arc(x2,y2-120,0,90,10);    //curve of right side
    //----------------------------
    line(x1,y1-130,x1+87,y1-140);
    line(x2,y2-130,x2-45,y2-140);
    //-----------------------The click button
    arc(x1+30,y1-130,15,170,12);
    //-------------------------The focus portion
    int circlex = 320, circley= 290;
    circle(circlex,circley,50);
    circle(circlex,circley,30);
    circle(circlex,circley,10);
    arc(circlex+50,circley,270,90,15);
    //------------------------- the upper part
    line(circlex-40,circley-32,circlex-30,circley-100);
    arc(circlex-20,circley-100,90,180,10);
    line(circlex-20,circley-110,circlex+25,circley-110);
    line(circlex-20,circley-100,circlex+5,circley-100);
    line(circlex+15,circley-100,circlex+20,circley-100);
    arc(circlex+25,circley-100,0,90,10);
    line(circlex+35,circley-100,circlex+40,circley-30);
    //---------------------------------
    line(circlex-40,circley-32,x1-10,y1-95);
    circle(x1+10,y1-110,7);
    line(x1+30,y1-93,x1+30,y1-40);
    line(x1+30,y1-30,x1+30,y1-20);


    setcolor(0);
    setlinestyle(0,0,1);


    getchar();
    closegraph();
    return 0;
}





