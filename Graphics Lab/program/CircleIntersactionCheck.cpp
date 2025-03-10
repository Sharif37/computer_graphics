#include <stdio.h>
#include <math.h>
#include<graphics.h>
int doCirclesIntersect(int xc1, int yc1, int r1, int xc2, int yc2, int r2) {
    float dx = xc2 - xc1;
    float dy = yc2 - yc1;
    float distance = sqrt(dx * dx + dy * dy);

    
    if (distance <= r1 + r2 && distance >= fabs(r1 - r2)) {
        return 1; 
    } else {
        return 0; // Circles do not intersect
    }
}

int main() {

    initwindow(600,600);
    int xc1, yc1, r1; // Circle 1 parameters
    int xc2, yc2, r2; // Circle 2 parameters

    // Input coordinates and radii of the circles
    printf("Enter center coordinates and radius of circle 1 (xc1 yc1 r1): ");
    scanf("%d %d %d", &xc1, &yc1, &r1);
    circle(xc1,yc1,r1);
    printf("Enter center coordinates and radius of circle 2 (xc2 yc2 r2): ");
    scanf("%d %d %d", &xc2, &yc2, &r2);
    circle(xc2,yc2,r2);

    // Check if circles intersect
    if (doCirclesIntersect(xc1, yc1, r1, xc2, yc2, r2)) {
        outtext("The circles intersect each other.");
    } else {
        outtext("The circles do not intersect.");
    }

    getch();
    closegraph();
    return 0;
}
