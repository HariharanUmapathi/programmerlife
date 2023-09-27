/*4.07 Write a program that prints the values 10.45678 in exponential format with following specification.
(a) correct to two decimal places
(b) correct to four decimal places
(c) correct to eight decimal places
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a;
clrscr();
printf("Enter a number\n");
scanf("%f",&a);
printf("%.2e\n%.5e\n%.0e\n\n",a,a,a);
getch();
}
