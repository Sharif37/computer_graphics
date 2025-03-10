#include<graphics.h>
#include <iostream>
using namespace std;

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");

   POINT cursorPos;
   while(1)
   {
       cleardevice();
    GetCursorPos(&cursorPos);
    circle(cursorPos.x, cursorPos.y, 50);

    if(GetAsyncKeyState(VK_LBUTTON))
        break;

   delay(50);

   }
   closegraph();
}
