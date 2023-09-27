/*3.3 Given three values, write a program to read three values from keyboard and print out the largest of them without using if statement.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
clrscr();
printf("Enter  3 numbers\n");
scanf("%f%f%f",&a,&b,&c);
max=(a*(a>b)*(a>c))||(b*(b>a)*(b>c))||(c*(c>a)*(c>b));
printf("Maximum of given three is %d",max);
getch();
}
