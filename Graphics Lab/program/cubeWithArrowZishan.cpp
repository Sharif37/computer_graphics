#include<graphics.h>

int main(){

    initwindow(1000,600);

    setlinestyle(0,0,4);

    line(357,209,357,368);
    line(472,425,472,128);
    line(357,368,472,425);
    line(583,206,583,371);
    line(583,371,472,425);
    line(357,209,472,163);
    line(472,163,583,206);
    line(357,209,472,267);
    line(472,267,583,206);
    line(330,383,472,310);
    line(472,310,612,385);

    //arrows
    setlinestyle(0,0,4);
    line(333,364,330,383);
    line(330,383,352,390);






    getch();
    closegraph();

}
