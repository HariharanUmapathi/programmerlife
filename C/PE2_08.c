/*2.8 Write a program to read two floating point number using scanf statement, assign
their sum to an integer variable and the output the values of all three variables.  
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float num1,num2;
int ans;
clrscr();
printf("Enter 2 numbers\n");
scanf("%f%f",&num1,&num2);
ans=num1+num2;
printf("ans=%d",ans);
getch();
}
