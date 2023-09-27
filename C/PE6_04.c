/*6.4 The numbers in the sequence 
1 1 2 3 5 8 13 21 34 …..
are called Fibonacci numbers.  Write a program using do …while loop to calculate and prit first m Fibboncaci numbers.

(Hint: After the first two numbers in the series, each numer is the sum of the two preceding numbers.)
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a1=0,a2=0,a3=1,n;
clrscr();
printf("Enter number of terms\n");
scanf("%d",&n);
while(n--)
	{
	printf("%d\t",a3);
	a1=a2;
	a2=a3;
	a3=a1+a2;
	}
printf("\n");
getch();
}
