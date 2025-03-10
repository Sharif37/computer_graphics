#include <graphics.h>
#include <stdio.h>


int main()
{
    
    int left, top, right, bottom;
    int centerX, centerY, radius;

    printf("Enter the coordinates of the rectangle (left top right bottom): ");
    scanf("%d %d %d %d", &left, &top, &right, &bottom);

    // Calculate the center of the rectangle
    centerX = (left + right) / 2;
    centerY = (top + bottom) / 2;

    // Calculate the radius for the circle (half of the minimum side of the rectangle)
    radius = (right - left < bottom - top) ? (right - left) / 2 : (bottom - top) / 2;

    // Initialize graphics
    initwindow(500, 500);

    // Draw rectangle
    setcolor(BLUE);
    rectangle(left, top, right, bottom);

    // Draw circle inside the rectangle
    setcolor(RED);
    circle(centerX, centerY, radius);

    // Wait for a key press before closing the graphics window
    getch();
    closegraph();

    return 0;
}
