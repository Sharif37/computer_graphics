//        *************************************
//        * DIRECT USE OF LINE EQUATION*
//        *************************************

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int x1, y1, x2, y2;
	float m, c, x, y;
	int colors[] = {RED, GREEN, BLUE, YELLOW, CYAN, MAGENTA, WHITE};
	int num_colors = sizeof(colors) / sizeof(colors[0]);

	initwindow(640, 480);

	x1 = 200;
	x2 = 350;
	y1 = 250;
	y2 = 390;

	for (m = 0.5; m <= 1.5; m += 0.1)
	{
		c = y1 - m * x1;
		int color = colors[(int)((m - 0.5) / 0.1) % num_colors];
		printf("m=%f, color=%d\n", m, color);

		if (m <= 1)
		{
			x = x1;
			while (x <= x2)
			{
				y = m * x + c;
				putpixel(x, y, color);
				x = x + 1;
			}
		}

		if (m > 1)
		{
			y = y1;
			while (y <= y2)
			{
				y = y + 1;
				x = (y - c) / m;
				putpixel(x, y, color);
			}
		}
	}

	getch();
	closegraph();
	return 0;
}
