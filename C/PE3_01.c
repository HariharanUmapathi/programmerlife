/*3.1 Write a program to read a four digit integer and print their sum of its digits
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int num,r,sum=0;
clrscr();
printf("Enter a four digit integer\n");
scanf("%d",&num);
while(num>0)
{
r=num%10;
sum+=r;
num/=10;
}
printf("Sum of digits of given num=%d",sum);
getch();
}
