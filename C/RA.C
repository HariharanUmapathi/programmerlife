#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();int x,*p;
x=100;
p=&x;
printf("%d",*p);
getch();
}