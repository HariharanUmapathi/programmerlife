/*4.06 Write a program to read three integers from the keyboard using one scanf statement and output them on one line using:
(a) three printf statements		
(b) only one printf with conversion specifiers and 
(c) only one printf without conversion specifiers
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=0,c=0;
clrscr();
printf("Enter 3 number\n");
scanf("%d%d%d",&a,&b,&c);
	printf("No specifiers a:%d",a);
	printf("With conversion specifiers h:%hd,l:%ld,L:%Ld ",b,b,b);
	printf("%d\n",c);
getch();
}
