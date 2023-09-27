/*6.1 Given a number write a program using whileloop to reverse the  digits of the number.  For example the number 12345
should be written as 
54321
(Hint: Use modulus operator to extract the last digit and the integer division by 10 to get then n-1 digit number.) 
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1=0,r;
clrscr();
printf("Enter a integer\n");
scanf("%d",&n);
while(n>0)
	{
		r=n%10;
		n1=n1*10+r;
		n=n/10;
	}
printf("Reversed number is :%d\n",n1,r);
getch();
}
