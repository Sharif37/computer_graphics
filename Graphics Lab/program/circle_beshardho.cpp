#include <graphics.h>
#include <math.h>
#include<stdio.h>

int main()
{
    initwindow(500,500);
    int centerX, centerY, radius;

    printf("Enter the center coordinates of the circle (x y): ");
    scanf("%d %d", &centerX, &centerY);

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius) ;



    // Draw circle
    setcolor(BLUE);
    circle(centerX, centerY, radius);

    // Calculate tangent points
    int tangentX1 = centerX + radius;
    int tangentY1 = centerY;

    int tangentX2 = centerX - radius;
    int tangentY2 = centerY;

    // Draw tangent lines
    setcolor(RED);
    line(centerX, centerY, tangentX1, tangentY1);
    line(centerX, centerY, tangentX2, tangentY2);

    // Wait for a key press before closing the graphics window
    getch();
    closegraph();

    return 0;
}
