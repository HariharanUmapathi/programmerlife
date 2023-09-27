/*3.09 Write a program that determines whether a given integer is odd or even and displays the number and description on the same line.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
do{
printf("Enter a number:enter 0 to end program\n");
scanf("%d",&i);
if(i%2==0)
	printf("\n%d is even\n");
else
	printf("\n%d is odd\n");
}
while(i!=0)
getch();
}
