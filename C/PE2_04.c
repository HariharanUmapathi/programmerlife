/*2.4 write a program that requests 2 float numbers form the user and 
divides the first number by second number and display
the result along with the numbers.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float num1,num2;
clrscr();
printf("Enter 2 numbers:\n");
scanf("%f%f",&num1,&num2);
printf("number 1:%f\n,number 2:%f,answer=%f",num1,num2,num1/num2);
getch();
}
