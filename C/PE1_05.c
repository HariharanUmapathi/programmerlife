/*1.5 Given the radius of a circle, write a program to compute and display its area. Use a symbolic constant to define the  PI value and assume a suitable value for radius.
Program:*/
#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
float r,area;
clrscr();
printf("Enter radius:\n");
scanf("%f",&r);
area=PI*r*r;
printf("Area of circle =%f",area);
getch();
}
