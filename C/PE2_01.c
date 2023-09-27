/*2.1 Write a program to determine and print the sum of the following harmonic series for a given value of n:
1+1/2+1/3+1/4+...+1/n
The value of n should be given interactively through the terminal
 
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
float sum=0.0;
clrscr();
printf(“Enter value for n:\n”);
scanf(“%d”);
for(i=1;i<=n;i++)
{
sum+=1.0/i;
}
printf(“sum for %d terms =%f”,n,sum);
getch();
}
