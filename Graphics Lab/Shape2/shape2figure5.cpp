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

    //................................................
    setcolor(0);
    circle(180,150,50);    //the first circle one black part
    setfillstyle(1,0);
    floodfill(181,151,0);

    setcolor(0);
    circle(270,150,50);    //the second circle black part
    setfillstyle(1,0);
    floodfill(271,141,0);

    setcolor(15);
    circle(180,150,40);    //the first circle one white part
    setfillstyle(1,15);
    floodfill(181,151,15);

    setcolor(15);
    circle(270,150,40);    //the second circle white part
    setfillstyle(1,15);
    floodfill(271,141,15);
    //---------------------------------------------------------------
    setcolor(0);
    circle(180,150,15);    //the inner circle one black part
    setfillstyle(1,0);
    floodfill(181,151,0);

    setcolor(0);
    circle(270,150,15);    //the inner circle two circle black part
    setfillstyle(1,0);
    floodfill(271,151,0);

    setcolor(15);
    circle(180,150,5);    //the inner circle one white part
    setfillstyle(1,15);
    floodfill(181,151,15);

    setcolor(15);
    circle(270,150,5);    //the inner circle white part
    setfillstyle(1,15);
    floodfill(271,151,15);


    //-----------------------------------------------------
    setcolor(0);
    rectangle(130,200,320,330);       //the main box black one
    setfillstyle(1,0);
    floodfill(181,201,0);

    setcolor(15);
    rectangle(140,210,310,320);       //the main box white one
    setfillstyle(1,15);
    floodfill(191,211,15);
    //-------------------------------------- the front part
    setcolor(0);
    rectangle(315,230,360,300);       //the black one---1
    setfillstyle(1,0);
    floodfill(331,231,0);

    setcolor(15);
    rectangle(325,240,350,290);       //the white one-----1
    setfillstyle(1,15);
    floodfill(326,241,15);

    setcolor(0);
    rectangle(360,240,400,290);       //the main box black one
    setfillstyle(1,0);
    floodfill(361,251,0);

    setcolor(15);
    rectangle(360,250,390,280);       //the main box white one
    setfillstyle(1,15);
    floodfill(366,251,15);


    setcolor(0);
    rectangle(440,225,450,300);       //the front part black one
    setfillstyle(1,0);
    floodfill(441,226,0);

    //-------------------------------------------the stand part
    setcolor(0);
    rectangle(170,390,190,400);       //stand one
    setfillstyle(1,0);
    floodfill(181,395,0);

    setcolor(0);
    rectangle(260,390,280,400);       //stand two
    setfillstyle(1,0);
    floodfill(261,395,0);

    //..................the front part diagonal lines
    setlinestyle(0, 0, 10);
    setcolor(0);
    //rectangle(440,215,450,310);
    line(445, 225, 390, 245);
    line(445, 300, 390, 285);

    //------------------the stand part : the diagonal one's

    line(225,325,190,400);
    line(190,325,170,400);

    line(225,325,260,400);
    line(260,325,280,400);



   // line(220,300,290,366);




    getchar();
    closegraph();
    return 0;
}







