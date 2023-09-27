/*4.08 Write a program to print the value 345,6789 in fixed-point fomat with following specifications
     (a) correct to two decimal places;
     (b) correct to five decimal places;
     (c) correct to zero decimal places;
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a;
clrscr();
printf("Enter a number\n");
scanf("%f",&a);
printf("%.2f\n%.5f\n%.0f\n\n",a,a,a);
getch();
}
