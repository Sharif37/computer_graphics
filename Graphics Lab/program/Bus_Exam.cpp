#include<graphics.h>
int main(){

initwindow(600,600);
//setlinestyle(0,0,2);

line(151,123,463,123);
line(145,136,463,136);

line(151,123,117,199);
line(117,199,138,248);
line(138,248,186,248);
line(221,248,380,248);
line(416,248,463,248);

line(463,123,463,248);

circle(203,248,17);
circle(203,248,13);

circle(398,248,17);
circle(398,248,13);

//dorja

line(152,157,138,197);
line(138,197,149,240);

line(149,240,177,240);
line(152,157,189,157);
line(189,157,189,223);

arc(203,247,119,163,27);

//middle dorja
line(190,184,463,184);
line(190,193,463,193);

//rect1

line(202,136,202,177);
line(202,177,255,177);
line(255,177,255,136);

//rect2

line(263,136,263,177);
line(320,177,263,177);
line(320,177,320,136);


//rect3
line(328,136,328,177);
line(328,177,386,177);
line(386,177,386,136);

//rect4
line(395,136,395,177);
line(456,136,456,177);



//line
line(202,177,463,177);

//dorjar handle
line(141,191,149,198);
line(149,198,189,184);




getch();
closegraph();
return 0;
}
