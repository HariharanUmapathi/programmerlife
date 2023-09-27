/*4.03 Write a program to read the following numbers, round them off to the nearest integers. and print out the results in integer form: 35.7  50.21 -23.73  -46.45
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float num,r;
int dec;
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
getch();
}
