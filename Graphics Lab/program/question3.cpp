#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int c_x,c_y,r,left,top,right,bottom,c_x1,c_y1,r1;
    setbkcolor(15);
    cleardevice();



    printf("Point of a circle: \n");
    scanf("%d %d %d",&c_x, &c_y, &r);
    printf("Point of a rectangle: \n");
    scanf("%d %d %d %d", &left, &top, &right, &bottom);

   //  c_x1 = 300;
   // c_y1 = 300;
    //r1 = 100;

   // setcolor(15);
    //circle(c_x1,c_y1,r1);
    //rectangle(left,top,right,bottom);

   while(1)
   {

    if(left>(c_x-r) && right<(c_x+r) && top>(c_y-r) && bottom<(c_y+r))
    {
        int x = c_x,y = c_y,r2 = r;

        //printf("the rectangle is inside the circle");
        setcolor(BLACK);
        circle(c_x,c_y,r);
        rectangle(left,top,right,bottom);

    }
    else
    {
        printf("the rectangle is out of the circle");
        return 0;
    }

   }


    //getchar();
    //closegraph();

}










