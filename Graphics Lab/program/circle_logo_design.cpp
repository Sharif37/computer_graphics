#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   initwindow(600,600);

    int left = 100,top = 50, right = 500,bottom = 450;
    //White Background
    setcolor(WHITE);
    rectangle(left,top,right,bottom);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    //circle
    setcolor(BLACK);
    int rx = 300, ry = 250;
    circle(rx,ry,100);
    setfillstyle(1,0);
    floodfill(rx+1,ry+1,0);
    //
    setcolor(15);
    circle(rx,ry,94);
    setfillstyle(1,15);
    floodfill(rx+1,ry+1,15);
    //white portion of a circle 1
    rectangle(rx-110,ry-20,rx-90,ry);
    setfillstyle(1,15);
    floodfill(rx-100,ry-10,15);
    // while portion of a circle 2
    rectangle(rx+90,ry,rx+110,ry+30);
    setfillstyle(1,15);
    floodfill(rx+97,ry+10+1,15);

    // square petals
    //petal 1
    setcolor(0);
    line(rx-30,ry,rx-20,ry-10);
    line(rx-30,ry,rx-20,ry+10);
    line(rx-10,ry,rx-20,ry-10);
    line(rx-10,ry,rx-20,ry+10);
    setfillstyle(1,0);
    floodfill(rx-20,ry,0);

    //petal 2
    setcolor(0);
    line(rx+10,ry,rx+20,ry-10);
    line(rx+10,ry,rx+20,ry+10);
    line(rx+20,ry-10,rx+30,ry);
    line(rx+20,ry+10,rx+30,ry);
    setfillstyle(1,0);
    floodfill(rx+20,ry,0);

    //petal 3
    setcolor(LIGHTRED);
    line(rx-10,ry-20,rx,ry-30);
    line(rx,ry-30,rx+10,ry-20);
    line(rx+10,ry-20,rx,ry-10);
    line(rx,ry-10,rx-10,ry-20);
    setfillstyle(1,LIGHTRED);
    floodfill(rx,ry-20,LIGHTRED);

     //petal 3
    setcolor(0);
    line(rx-10,ry+20,rx,ry+30);
    line(rx,ry+30,rx+10,ry+20);
    line(rx+10,ry+20,rx,ry+10);
    line(rx,ry+10,rx-10,ry+20);
    setfillstyle(1,0);
    floodfill(rx,ry+20,0);

    //middle line part 1
    rectangle(rx-100,ry-3,rx-29,ry+3);
    setfillstyle(1,0);
    floodfill(rx-94,ry,0);
    //middle line part 1
    rectangle(rx+29,ry-3,rx+99,ry+3);
    setfillstyle(1,0);
    floodfill(rx+31,ry,0);


    getchar();
    closegraph();
    return 0;
}










