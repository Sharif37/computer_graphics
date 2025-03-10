#include <graphics.h>
#include <cmath>
#include <conio.h> 


void drawTangent(int cx, int cy, int r, int angle) {
    float rad = angle * M_PI / 180.0; 

    
    int px = cx + r * cos(rad);
    int py = cy - r * sin(rad);

   
    int dx = -(py - cy);
    int dy = px - cx;

    // Tangent endpoints
    int length = 80;
    int t1x = px + (dx * length) / r;
    int t1y = py + (dy * length) / r;
    int t2x = px - (dx * length) / r;
    int t2y = py - (dy * length) / r;

    
    line(t1x, t1y, t2x, t2y);
}

int main() {
    initwindow(500, 500);
    
    int centerX = 250, centerY = 250, radius = 100;
    int angles[] = {0, 45, 90, 135, 180, 225, 270, 315};
    int currentIndex = 0;

    while (1) {
        cleardevice(); // Clear the screen

        // Draw the circle
        setcolor(WHITE);
        circle(centerX, centerY, radius);

        // Draw tangent at the current octant
        setcolor(YELLOW);
        drawTangent(centerX, centerY, radius, angles[currentIndex]);

        // Wait for key press
        char key = getch();
        if (key == 'i' || key == 'I') {  
            currentIndex = (currentIndex + 1) % 8; // Move to next tangent
        } else if (key == 27) { // ESC key to exit
            break;
        }

       
    }

    closegraph();
    return 0;
}
