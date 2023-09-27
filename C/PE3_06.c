/*3.6 The cost of one type of mobile service is Rs.250 plus Rs.1.25 for each call made over and above
100 calls.  Write a program to read customer codes and calls  made and print the bill for each customer
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
char name[20];
float charges,min=250,
clrscr();
printf("Enter customer name and calls made:\n");
scanf("%s%d",&name,&calls);
if(calls>100)
charges=(calls-100)*1.25;
printf("Customer name:%s\tcalls used:%d\tAmount=%f ",name,calls,charges);
getch();
}
