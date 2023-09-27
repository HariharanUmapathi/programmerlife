/*6.5 write a  program  to evaluate equation y=xn when n is a non-negative integer is given.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float x,y=1;
int n,n1;
clrscr();
printf("Note: n must be a non-negetive integer\nEnter value for x and n:\n");
scanf("%f%d",&x,&n);
n1=n;
while(n--)
	{
	y*=x;
}
printf("Y=x^n==>%f=%f^%d",y,x,n1);
getch();
}
