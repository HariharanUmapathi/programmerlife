/*5.03 A set of two linear equations with two unknows x1,and x2 is given below
    ax1+by2=m
    cx1+dx2=n
    The set has unique solution
    x1=(md-bn)/(ad-cb)
    x2=(na-mc)/(ad-cb)
    Write a program that will read the values of constants a,b,c,d,m,n
    and compute the values of x1,x2. An appropriate message should be printed if ad-cb=0.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,d,m,n,x1,x2,deno;
clrscr();
printf("Enter values of a,b,c,d,m,n\n");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
deno=a*d-c*b;
if(deno==0)
	printf("Unable to determine\n denominator is zero\n");
else
{
x1=(m*d-b*n)/deno;
x2=(n*a-m*c)/deno;
printf("Solution:\nx1=%f\tx2=%f\n\n",x1,x2);
getch();
}
