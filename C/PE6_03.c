/*6.2 The Factorial of an integer m is the product o consecutive integers form from 1 to m.  That is 
factorial m=m!=m x m-1 x m-2 x....x 3 x 2 x 1
Write a program that computes and prints a table of factorials of any given m.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,n1;
clrscr();
printf("Enter a positive integer");
scanf("%d",&n);
n1=n;
while(n>0)
{
	fact=fact*n;
	n--;
}
printf("Factorial of %d is %d\n",n1,fact);
getch();
}
