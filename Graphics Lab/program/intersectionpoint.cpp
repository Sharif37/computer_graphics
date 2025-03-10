#include <graphics.h>
#include <stdio.h>

int main()
{
    
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int x, y, color;
    float m1, m2, c1, c2;
    initwindow(600,600);
    setbkcolor(WHITE);
    cleardevice();

    // Get the coordinates of the two lines
    printf("Enter the coordinates of the first line (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("Enter the coordinates of the second line (x3 y3 x4 y4): ");
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
    setcolor(BLACK);
    // Draw the two lines
    line(x1, y1, x2, y2);
    line(x3, y3, x4, y4);

    // Find the equations of the two lines
    m1 = (float)(y2 - y1) / (x2 - x1);
    m2 = (float)(y4 - y3) / (x4 - x3);
    c1 = y1 - m1 * x1;
    c2 = y3 - m2 * x3;

    // Check if the lines are parallel
    if (m1 == m2) {
        printf("The lines are parallel.\n");
    } else {
        // Find the intersection point
        x = (c2 - c1) / (m1 - m2);
        y = m1 * x + c1;
        printf("The intersection point is at (%d, %d)\n", x, y);
        putpixel(x, y, YELLOW);
        circle(x,y,2);
    }
    getch();
    closegraph();
    return 0;
}
