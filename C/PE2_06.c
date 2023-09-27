/*2.6 Write a program to count and print the number of negative and positive numbers in a given set of numbers.  Test your program with a suitable set of numbers.  Use scanf to read the numbers. Reading should be terminated when value 0 is encountered.   
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int count=0;
float num;
clrscr();
printf("Enter numbers\n");
do
{
scanf("%f",&num);
if(num<0)
count++;
}while(num!=0);
printf("The number of negative numbers %d",count);
getch();
}
