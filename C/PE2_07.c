/*2.7 Write a program to do  the following :
(a)Declare x and y as integer variable and z as a short integer variable.
(b)Assign two 6 digit numbers to x and y
(c ) Assign the sum of x and y to z
(d) Output the values of x,y and z
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
short int z;
clrscr();
x=111111;
y=222222;
z=x+y;
printf("x=%d,y=%d,z=%d",x,y,z);
getch();
}
