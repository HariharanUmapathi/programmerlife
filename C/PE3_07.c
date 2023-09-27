/*3.7  Write a program to print a table of sin and cos functions for the interval form 0 to 180 degrees in increments of 15 as shown below.
---------------------------------------------------------
x degrees	sin(x)		cos(x)
0		…..		……			
15		…..		…..			
…..		…..		…..

180		…..		…..
Program:*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i;
clrscr();
printf("-----------------------\n");
printf("angle\tsin(x)\tcos(x)\n");
printf("-----------------------\n");
for(i=0;i<=180;i=i+15)
{
printf("%3d\t%.4lf\t%.4lf\n",i,sin(i),cos(i));
}
printf("-----------------------\n");

getch();
}
