/*3.4 Write a program to read two integer values m and n and to decide and print whether m is a multiple of n
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int m,n;
clrscr();
	printf("Enter value for m and n:\n");
	scanf("%d%d",&m,&n);
	if(m>=n)
		if(m%n==0 && n!=1)
			printf("%d is a multiple of %d",m,n);
		else
			printf("%d is not a multiple of %d",m,n);
		else
			printf("\nsuggestion: enter number like m>n ex:8 2");
	printf("\n");
getch();
}
