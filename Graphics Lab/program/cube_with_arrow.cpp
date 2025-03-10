#include <graphics.h>

int main()
{
	 initwindow(1000,1000);
    

    rectangle(50,30,800,500);
    setfillstyle(1,WHITE);
    floodfill(51,31,WHITE);

    int arr[]= {359,119,481,190,481,364,357,427,228,370,229,190,359,119};

    setcolor(BLACK);
    setlinestyle(0,0,5);
    drawpoly(7,arr);

    int arr2[]= {359,119,481,190,358,268,229,190,359,119};

    setcolor(BLACK);
    setlinestyle(0,0,5);
    drawpoly(6,arr2);


    int arr3[]= {357,312,481,364,357,427,228,370,357,312};


    setcolor(BLACK);
    setlinestyle(0,0,5);
    drawpoly(6,arr3);


    //arrow
    setcolor(BLACK);
    setlinestyle(0,0,6);
    line(356,427,359,65);

    setcolor(BLACK);
    setlinestyle(0,0,4);
    line(357,314,542,390);


    setcolor(BLACK);
    setlinestyle(0,0,4);
    line(357,314,191,390);

    //for arrow 1
    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(359,65,327,88);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(359,65,383,88);

    //for arrow 2

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(542,390,537,359);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(542,390,511,403);

    //for arrow 3

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(191,390,193,365);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(191,390,214,401);














	getch();
	closegraph();
}
