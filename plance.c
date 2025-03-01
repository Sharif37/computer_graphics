#include <graphics.h>
#include <stdio.h>
#include <math.h>

// Function to draw filled polygon
void drawFilledPolygon(int points[], int numPoints) {
    drawpoly(numPoints, points);
    floodfill(points[0] + 5, points[1] + 5, getcolor());
}

int main() {
    int gd = DETECT, gm;
    int width = 700, height = 700;
    initwindow(width, height);  
    setbkcolor(WHITE);
    cleardevice();

    // Mathematical constants
    const double PI = 3.14159265358979323846;
    
    // Precise positioning parameters
    const int SCREEN_WIDTH = getmaxx();
    const int SCREEN_HEIGHT = getmaxy();
    
    // Center the airplane in the screen
    const int centerX = SCREEN_WIDTH / 2;
    const int centerY = SCREEN_HEIGHT / 2;
    
    // Fuselage parameters - calculated as percentage of screen
    const int fuselageLength = SCREEN_WIDTH * 0.6;
    const int fuselageHeight = fuselageLength * 0.2;
    const int noseRadius = fuselageHeight * 0.3;
    
    // Calculate key positions
    const int noseX = centerX - fuselageLength/2 + noseRadius;
    const int tailX = centerX + fuselageLength/2;
    const int topY = centerY - fuselageHeight/2;
    const int bottomY = centerY + fuselageHeight/2;
    
    // Window parameters - mathematically calculated
    const int windowCount = 6;
    const int windowWidth = fuselageLength * 0.05;
    const int windowHeight = fuselageHeight * 0.6;
    const int windowSpacing = (fuselageLength * 0.4) / (windowCount + 1);
    const int windowStartX = noseX + fuselageLength * 0.15;
    const int windowTopY = topY + (fuselageHeight - windowHeight) / 2;
    
    // Wing parameters - precise angle and size
    const double wingAngle = 30.0 * PI / 180.0; // 30 degrees in radians
    const int wingLength = fuselageLength * 0.3;
    const int wingWidth = wingLength * 0.3;
    const int wingRootX = centerX - fuselageLength * 0.1;
    
    // Calculate wing tip position using trigonometry
    const int wingTipX = wingRootX - wingLength * cos(wingAngle);
    const int wingTipY = topY - wingLength * sin(wingAngle);
    
    // Bottom wing parameters
    const double bottomWingAngle = 90.0 * PI / 180.0; // 90 degrees (straight down)
    const int bottomWingLength = fuselageHeight * 1.5;
    const int bottomWingWidth = bottomWingLength * 0.4;
    const int bottomWingRootX = centerX + fuselageLength * 0.05;
    
    // Tail parameters
    const double tailAngle = 45.0 * PI / 180.0; // 45 degrees in radians
    const int tailLength = fuselageHeight * 1.2;
    const int tailWidth = tailLength * 0.4;
    const int tailRootX = tailX - fuselageLength * 0.15;
    
    // Set drawing style
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    
    // Draw fuselage as a precisely calculated polygon
    int fuselagePoints[14] = {
        noseX, centerY,                   // Nose point
        noseX, topY,                      // Top front
        tailX - fuselageHeight * 0.2, topY,    // Top rear
        tailX, centerY - fuselageHeight * 0.25, // Upper tail
        tailX, centerY + fuselageHeight * 0.25, // Lower tail
        tailX - fuselageHeight * 0.2, bottomY,  // Bottom rear
        noseX, bottomY                    // Bottom front
    };
    
    // Draw and fill fuselage
    drawpoly(7, fuselagePoints);
    //floodfill(centerX, centerY, BLACK);
    
    // Draw nose curve more precisely
    arc(noseX, centerY, 90, 270, noseRadius);
    //floodfill(noseX - noseRadius + 5, centerY, BLACK);
    
    // Draw windows with precise spacing
    for (int i = 0; i < windowCount; i++) {
        int windowX = windowStartX + i * windowSpacing;
        rectangle(windowX, windowTopY, 
                  windowX + windowWidth, windowTopY + windowHeight);
    }
    
    // Draw top wing using calculated coordinates
    int topWingPoints[8] = {
        wingRootX, topY,                      // Root front
        wingTipX, wingTipY,                   // Tip front
        wingTipX + wingWidth, wingTipY,       // Tip rear
        wingRootX + wingWidth, topY           // Root rear
    };
    drawpoly(4, topWingPoints);
    //floodfill(wingRootX + 5, topY - 5, BLACK);
    
    // Draw bottom wing using calculated coordinates
    int bottomWingTipX = bottomWingRootX;
    int bottomWingTipY = bottomY + bottomWingLength;
    
    int bottomWingPoints[6] = {
        bottomWingRootX - bottomWingWidth/2, bottomY,    // Root left
        bottomWingTipX, bottomWingTipY,                  // Tip
        bottomWingRootX + bottomWingWidth/2, bottomY     // Root right
    };
    drawpoly(3, bottomWingPoints);
   // floodfill(bottomWingTipX, bottomWingTipY - 5, BLACK);
    
    // Draw tail fin using calculated coordinates
    const int tailTipX = tailRootX + tailLength * cos(tailAngle);
    const int tailTipY = topY - tailLength * sin(tailAngle);
    
    int tailPoints[6] = {
        tailRootX, topY,                      // Root front
        tailTipX, tailTipY,                   // Tip
        tailTipX + tailWidth, tailTipY + tailWidth * 0.3, // Tip rear
        tailX - fuselageHeight * 0.3, topY    // Root rear
    };
    drawpoly(4, tailPoints);
    //floodfill(tailTipX - 5, tailTipY + 5, BLACK);
    
    getch();
    getchar();
    closegraph();
    return 0;
}