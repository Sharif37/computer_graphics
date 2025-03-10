#include <stdio.h>
#include <math.h>
#include<graphics.h>

int isPointInsideCircle(int x, int y, int xc, int yc, int r) {
    // Calculate distance between point (x, y) and circle center (xc, yc)
    float distance = sqrt((x - xc) * (x - xc) + (y - yc) * (y - yc));

    // If distance is less than radius, point is inside the circle
    if (distance <= r) {
        return 1; // Inside the circle
    } else {
        return 0; // Outside the circle
    }
}

int main() {

    initwindow(600,600);

    int x, y; // Point coordinates
    int xc, yc, r; // Circle center coordinates and radius

    // Input point coordinates
    printf("Enter coordinates of the point (x y): ");
    scanf("%d %d", &x, &y);

    setlinestyle(0,0,3);


    putpixel(x,y,WHITE);

    // Input circle center coordinates and radius
    printf("Enter center coordinates of the circle (xc yc): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter radius of the circle: ");
    scanf("%d", &r);
    circle(xc,yc,r);

    // Check if the point is inside the circle
    if (isPointInsideCircle(x, y, xc, yc, r)) {
        outtext("The point is inside the circle.");
    } else {
        outtext("The point is outside the circle.");
    }

    getch();
    closegraph();


}
