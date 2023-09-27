/*6.8. Write a program to read the age of 100 persons and count the number of person in the age group 50 to 60.  Use for and continue statements.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{	
int i,age,count=0;
clrscr();
for(i=0;i<=100;i++)
{
	scanf("%d",&age);
	if(age>=50&&age<=60)
	  count++;
	else
	  continue;
	}
printf("Age 50-60 count is %d",count);
getch();
}
