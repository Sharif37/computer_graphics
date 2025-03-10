#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm," ");

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
    setcolor(15);
    circle(rx,ry,85);
    setfillstyle(1,15);
    floodfill(rx+1,ry+1,15);
    // pentagon
    setcolor(0);
    line(rx-20,ry-30,rx+20,ry-30); //1
    line(rx-20,ry-30,rx-30,ry+5);  //2
    line(rx+20,ry-30,rx+30,ry+5);  //3
    line(rx-30,ry+5,rx,ry+25);     //4
    line(rx+30,ry+5,rx,ry+25);     //5
    //---------------------------------flower petals
    //petal-1
    setcolor(LIGHTBLUE);
    line(rx-20,ry-30,rx-20,ry-70);
    line(rx+20,ry-30,rx+20,ry-70);
    line(rx-20,ry-70,rx+20,ry-70);
    line(rx-20,ry-30,rx+20,ry-30);
    setfillstyle(1,LIGHTBLUE);
    floodfill(rx-20+1,ry-40,LIGHTBLUE);

    //Petal 2
    setcolor(LIGHTGREEN);
    line(rx-20,ry-30,rx-30,ry+5);
    line(rx-20,ry-30,rx-60,ry-40);
    line(rx-30,ry+5,rx-70,ry-5);
    line(rx-60,ry-40,rx-70,ry-5);
    setfillstyle(1,LIGHTGREEN);
    floodfill(rx-60,ry-30,LIGHTGREEN);

    //petal-3
   // setcolor(BLACK);
   // circle(rx,ry,75);

    setcolor(LIGHTRED);
    line(rx+20,ry-30,rx+30,ry+5);
    line(rx+20,ry-30,rx+57,ry-42);
    line(rx+30,ry+5,rx+70,ry-5);
    line(rx+57,ry-42,rx+70,ry-5);
    setfillstyle(1,LIGHTRED);
    floodfill(rx+57,ry-40,LIGHTRED);

    //petal-4
    setcolor(YELLOW);
    line(rx-30,ry+5,rx,ry+25);
    line(rx-30,ry+5,rx-60,ry+30);
    line(rx,ry+25,rx-30,ry+55);
    line(rx-60,ry+30,rx-30,ry+55);
    setfillstyle(1,YELLOW);
    floodfill(rx-30,ry+50,YELLOW);

    //petal-5
    setcolor(RED);
    line(rx+30,ry+5,rx,ry+25);
    line(rx+30,ry+5,rx+55,ry+35);
    line(rx,ry+25,rx+20,ry+57);
    line(rx+55,ry+35,rx+20,ry+57);
    setfillstyle(1,RED);
    floodfill(rx+20,ry+50,RED);


    getchar();
    closegraph();
    return 0;
}









