/*1.10 Area of a triangle is given by the formula
			A=√(S(S-a)(S-b)(S-c))
Where a,b, and c are sides of the triangle 2S=a+b+c. 	
Write a program to compute the area of the triangle given the values of a,b,c.
Program:*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,s=0.0,area=0.0;
clrscr();
printf(“Enter the value of sides a,b,c\n”);
scanf(“%f%f%f”,&a,&b,&c);
s=(a+b+c)/2;
area=sqrt((s*(s-a)*(s-b)*(s-c)));
printf(“Area=%f”,area);
getch();
}
