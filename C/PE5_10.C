/* Write a C program to input tow numbers a and b display whether
(a) a is greater than b
(b) b is greater than a
(c) or a and b are equal

Program*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
clrscr();
printf("Enter a,b\n");
scanf("%f%f",&a,&b);
if(a>b)
printf("\n a is greater than b\n");
if(b>a)
printf("\n b is greater than a\n");
if(a==b)
printf("\n a and b are equal\n");
getch();
}