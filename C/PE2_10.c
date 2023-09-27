/*2.10  Write a program to illustrate the use of symbolic constants in real-life  application.
Program:*/
#include<stdio.h>
#include<conio.h>
#define RET 58
void main()
{
int age;
clrscr();
printf("Enter your age");
scanf("%d",&age);
if(age>=RET)
	printf("You are able to get retirement\n");
else
	printf("You are not able to get retirement\n");
getch();
}
