#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

// Custom delay function
void custom_delay(int milliseconds)
{
    usleep(milliseconds ); // Convert milliseconds to microseconds
}

int main()
{
    int x1, y1, x2, y2;
    float m, c, x, y;

    // Initialize graphics window
    initwindow(640, 480);

    // Seed the random number generator
    srand(time(NULL));

    // Loop through different values of m
    for (float m = 0.5; m <= 1.5; m += 0.1)
    {
        // Generate random coordinates for the endpoints
        x1 = rand() % 640;
        y1 = rand() % 480;
        x2 = rand() % 640;
        y2 = rand() % 480;

        // Ensure the endpoints are not the same
        while (x1 == x2 && y1 == y2)
        {
            x2 = rand() % 640;
            y2 = rand() % 480;
        }

        // Calculate the slope and intercept
        m = (float)(y2 - y1) / (x2 - x1);
        c = y1 - m * x1;

        printf("m = %f\n", m);
        printf("Direct Use of the Line Equation\n");

        // Draw the line using the direct use of the line equation
        if (m <= 1)
        {
            x = x1;
            while (x <= x2)
            {
                y = m * x + c;
                putpixel(x, y, RED);
                x = x + 1;
            }
        }
        else
        {
            y = y1;
            while (y <= y2)
            {
                y = y + 1;
                x = (y - c) / m;
                putpixel(x, y, RED);
            }
        }

        // Pause to observe the line
        custom_delay(1000);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}