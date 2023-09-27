/*5.05 Write a program to print a two-dimentional Square root table.
To provide Square root of any number 0 to 9.9
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
float num=0.0;
clrscr();
printf("Sqrt table\n");
printf("-------------------------------------------------------------------------------------------------\n");
printf("  x  ");
for(i=0;i<=9;i++)
	printf("   %6.1f",i*0.1);

printf("\n-----------------------------------------------------------------------------------------------\n");
for(i=0;i<=9;i++)
{
printf("%5.1f",i*1.0);		
for(j=0;j<=9;j++)
{
printf("   %6.4f",sqrt(num));
num=num+0.1;
}
printf("\n");
	}
printf("\n-----------------------------------------------------------------------------------------------\n");
getch();
}
