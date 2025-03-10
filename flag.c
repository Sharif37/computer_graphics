#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    
    // Set background color to white
    setbkcolor(WHITE);
    cleardevice();  // Clear the screen with the background color

    // Draw the green rectangle (flag body)
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(150, 40, 450, 180);
    floodfill(160, 50, GREEN);

    // Draw the red circle (flag's center)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(300, 110, 40);  // Adjusted radius for better appearance
    floodfill(300, 110, RED);

    // Draw the flag pole
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(138, 35, 150, 450);
    floodfill(140, 40, BLUE);

    // Draw the base of the flag pole
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    bar(130, 450, 160, 460);

    getch();
    closegraph();
    return 0;
}