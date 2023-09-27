/*5.01 Write a program to determine whether a given number is 'odd' or 'even' and print the message
    NUMBER IS ODD
    or
    NUMBER IS EVEN
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);
if(num%2==0)
printf("NUMBER IS EVEN");
	else
printf("NUMBER IS ODD");
printf("\n");
getch();
}
