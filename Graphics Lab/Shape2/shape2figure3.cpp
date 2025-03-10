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


    setcolor(0);
    rectangle(200,200,460,350);       //the main box black one
    setfillstyle(1,0);
    floodfill(201,201,0);

    setcolor(15);
    rectangle(210,210,450,340);       //the main box white one
    setfillstyle(1,15);
    floodfill(211,211,15);

    setcolor(0);
    rectangle(260,210,270,230);       //the three points part 1 horizontal
    setfillstyle(1,0);
    floodfill(261,221,0);

    setcolor(0);
    rectangle(245,220,285,230);       //the three points part 1 vertical
    setfillstyle(1,0);
    floodfill(246,221,0);
    floodfill(284,229,0);

    setcolor(0);
    rectangle(330,210,340,230);       //the three points part 2 horizontal
    setfillstyle(1,0);
    floodfill(331,221,0);

    setcolor(0);
    rectangle(315,220,355,230);       //the three points part 2 vertical
    setfillstyle(1,0);
    floodfill(316,221,0);
    floodfill(354,229,0);

    setcolor(0);
    rectangle(390,210,400,230);       //the three points part 3 horizontal
    setfillstyle(1,0);
    floodfill(391,221,0);

    setcolor(0);
    rectangle(375,220,415,230);       //the three points part 3 vertical
    setfillstyle(1,0);
    floodfill(376,221,0);
    floodfill(414,229,0);


    setcolor(15);
    ellipse(300,275,0,360,10,5); //circle's white part
    setfillstyle(1,15);
    floodfill(309,275.5,15);

    setcolor(0);
    ellipse(300,275,0,360,20,10);
    //circle(300,275,20);
    setfillstyle(1,0);               //ellipse's black part
    floodfill(301,276,0);

    setcolor(0);
    rectangle(300,250,370,300);       //the mike part black background
    setfillstyle(1,0);
    floodfill(331,251,0);


    setcolor(15);
    rectangle(310,260,360,290);       //the mike part white background
    setfillstyle(1,15);
    floodfill(311,261,15);


     // setlinestyle(0, 0, 5);
   // line(210, 125, 175, 185);
   // line(390, 125, 430, 185);




    getchar();
    closegraph();
    return 0;
}





