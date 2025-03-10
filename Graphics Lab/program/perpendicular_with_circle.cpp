#include <graphics.h>
#include <stdio.h>


int main()
{
   
    int centerX, centerY, rad;
    printf("Enter the center of circle: ");
    scanf("%d %d %d", &centerX, &centerY, &rad);

    // Initialize graphics
    initwindow(500,500);

    setlinestyle(0,0,2);

    setcolor(RED);
    circle(centerX, centerY, rad);

    setcolor(BLUE);
    line(centerX+rad,centerY+rad+100,centerX+rad,centerY-rad-100);

    // Wait for a key press before closing the graphics window
    getch();
    closegraph();

    return 0;
}
