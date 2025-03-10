#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int c_x, c_y, r; // Circle center coordinates and radius
    int left, top, right, bottom; // Rectangle coordinates

    printf("Enter center coordinates and radius of the circle (c_x c_y r): ");
    scanf("%d %d %d", &c_x, &c_y, &r);

    printf("Enter coordinates of the rectangle (left top right bottom): ");
    scanf("%d %d %d %d", &left, &top, &right, &bottom);

    // Draw circle
    setcolor(BLUE);
    circle(c_x, c_y, r);

    // Draw rectangle
    setcolor(RED);
    rectangle(left, top, right, bottom);

    // Check if rectangle is inside the circle
    if (left > c_x - r && right < c_x + r && top > c_y - r && bottom < c_y + r) {
        outtext("The rectangle is inside the circle.");
    } else {
        outtext("The rectangle is outside the circle.");
    }

    getch();
    closegraph();
    return 0;
}
