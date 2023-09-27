/*2.3 Write a program to print even number 1-100
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Printing even numbers in the range 1-100\n");
for(i=1;i<=100;i++)
{
if(i%2==0)
printf("%d\n",i);
}
getch();
}
