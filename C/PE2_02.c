/*2.2 Write a program to read the price of an item in decimal form (like 15.95) and print the output in paise (like 1595 paise)
Program */
#include<stdio.h>
#include<conio.h>
void main() 
{
float p1;
int p2; 
clrscr();
printf(“Enter price\n”);
scanf(“%f”,&p1);
p2=(int)(p1*100);
printf(“Price:%5d paise\n”,p2);
getch();
}
