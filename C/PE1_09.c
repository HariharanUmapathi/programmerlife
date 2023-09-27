/*1.9 Relationship between Celsius and Fahrenheit is governed by the formula 
F=9C/5+32
Write a program to convert the temperature
(a)from Celsius to Fahrenheit and
(b)from Fahrenheit to Celsius
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float cel,far,temp;
char ch;
clrscr();
printf("Enter temp and unit ::EX 100 F\n");
scanf("%f%s",&temp,&ch);
if((ch=='c')||(ch=='C'))
{
	cel=temp;
	far=(cel*1.8)+32;
	printf(“Celsius=%f,Fahrenheit=%f”,cel,far);
}
if((ch=='f')||(ch=='F'))
{
far=temp;
cel=(far-32.0)/1.8;
printf(“Fahrenheit=%f,Celsius=%f”,far,cel);
}
getch();
}
