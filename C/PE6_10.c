6.10 Write a program to print a table of values of the function Y=exp(-x)
 for x varying from 0.0 to 10.0 in steps of 0.10.  The table should appear as follows:
 Table for Y=EXP(-X)
--------------------------------------
x 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9
--------------------------------------
0.0
1.0
2.0
3.0
.
.
.
9.0
--------------------------------------
Program:
#include<stdio.h>
#include<conio.h>

void main()
{//program to print table for y=exp(-x)
	int i,j,l=160;
	float x=0.0;
	printf("\t\t\t\t\t\t\tTable for y=exp(-x)\n\n");
	for(i=0;i<l;i++)
		printf("-");
	printf("\n");
	//table row
	printf("   X");
	//x value for title
	for(i=0;i<=9;i++)
		printf("%5c%5.1f%5c",' ',(float)(i*0.1),' ');
	printf("\n");
	for(i=0;i<l;i++)
		printf("-");
	printf("\n");
	//table contents
	for(i=0;i<=9;i++)
		{
		printf("%5.2f",(float)(i*1.0));
		for(j=1;j<=10;j++)
		{
		
		printf("%15.11f",exp(-(x)));
		x=x+0.1;
		}
		printf("\n");
		}
	for(i=0;i<l;i++)
		printf("-");
printf("\n");
getch();
}
