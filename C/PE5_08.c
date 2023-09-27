/*5.10 Write a program to compute the real roots of the quadratic equation ax^2+bx+c=0
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,disc,x1,x2;
clrscr();
printf("Enter co effiecients a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0&&b==0)
printf("No solutions\n");
else if(a==0)
printf("There is only one root\nx=%f",-c/b);
else
{
disc=b*b-4*a*c;
if(disc>=0)
{
x1=(-b+sqrt(disc))/2*a;
x2=(-b-sqrt(disc))/2*a;
printf("The real roots of the equation\n (%f)x^2+(%f)x+(%f)=0 are\n",a,b,c);
printf("x1=%8f,x2=%8f",x1,x2);
}
else
printf("The equation has no real roots\n");
getch();
}
