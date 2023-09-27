/*5.09 Write a program that will read the value of x and evaluate the following function
   {1 for x<0
 y={0 for x=0
   {-1 for x>0
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int y;
float x;
clrscr();
printf("Enter x value\n");
scanf("%f",&x);
if(x>0)
	y=-1;
else if(x<0)
	y=1;
else
	y=0;
printf("x=%f,\ty=%d",x,y);
getch();
}
