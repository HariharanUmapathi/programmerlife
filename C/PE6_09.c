/*6.9. Write a program to plot two curves of the type
y1=exp(-ax)
y2=exp(-ax^2/2)
Plot the grapsPloting Two curves
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
	float a,x,y1,y2;
	a=0.4;
	printf("             y-------------->\n");
	printf("0-------------------------------------------------------------->\n ");
	for(x=0;x<5;x=x+0.25)
	{
		y1=(int)(50*exp(-a*x)+0.5);
		y2=(int)(50*exp(-a*(x*x)/2)+0.5);

		if(y1==y2)
		{
			if(x==2.5)
				printf("x|");
			else
				printf(" |");
			for(i=1;i<=y1-1;++i)
				printf(" ");
			printf("#\n");

		}
		else if(y1>y2)
		{
			if(x==2.5)
			printf("x|");
			else
		printf(" |");
		for(i=1;i<y2-1;++i)
				printf(" ");
			printf(".");
	for(i=1;i<=(y1-y2-1);++i)
	printf(" ");
	printf(",\n");			
	}
else 
	{
		if(x==2.5)
			printf("x|");
		else
			printf(" |");
	for(i=1;i<(y1-1);++i)
		printf(" ");
		printf(",");
	for(i=1;i<=(y2-y1-1);++i)
		printf(" ");
		printf(".\n");
		}			
printf(" ");
getch();
}
