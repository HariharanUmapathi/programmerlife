/*1.7  Given two integers 20 and 10, write a program that uses a function add() to add two numbers and sub() to find the difference of these two numbers  and then display the sum and difference in following form
	20+10=30
	20-10=10
Program*/
#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
void main()
{
int a,b;
clrscr();
printf("Enter two integers\n");
scanf("%d%d",&a,&b);
printf("%d+%d=%d\n",a,b,add(a,b));
printf("%d-%d=%d\n",a,b,sub(a,b));
getch();
}
