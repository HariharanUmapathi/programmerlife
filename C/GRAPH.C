#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int gdriver=DETECT,gmode,errno;
clrscr();
initgraph(&gdriver,&gmode,"C:\TURBOC3\BGI\EVGVGA\BGI");
line(1,1,3,3);
closegraph();
getch();
}