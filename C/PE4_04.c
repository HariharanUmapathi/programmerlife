/
*4.04 Write a program that reads 4 floating print values in the range 0.0 to 20.0.  and
 prints a horizontal bar chart to represent these values using the character * as the fill character.
 For the purpose of the	char,
 the values may be rounded off to the nearest integer.
 For example,  the value 4.36 should be represented as follows	
		* * * *
		* * * * (4.36)
		* * * *
Note that the actual values are shown at the end of each bar
Program:*/	
#include<stdio.h>
#include<conio.h>
void main()
{
float num,r;
int i,j,dec;
clrscr();
printf("Enter a number\n");
scanf("%f",&num);
printf("Entered number:%f",num);
dec=(int)num;
r=num-dec;
printf("\n");
if(r>=0.5)
printf("Rounded value=%d",dec+1);
	else
printf("Rounded value=%d",dec);
printf("\n\n");
	
	for(i=0;i<=2;i++)
	{
	
for(j=1;j<=dec;j++)
	{
	printf("* ");
	}
	if(i==1)
	printf("(%.2f)",num);
	printf("\n");
	}
printf("\n");
getch();
}
