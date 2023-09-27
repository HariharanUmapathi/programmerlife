/*4.10 Write a program to read and display the following table of data
     Name       code     price
     Fan        67831    1234.50
     Motor      450      5786.70
     The name and code must be left-justified and price must be right-justified
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
char name[10][10];
int code[10];
float price[10];
start:
printf("Enter num of products\n");
scanf("%d",&num);
if(num<10)
{
for(i=0;i<num;i++)
{
printf("Enter Item Name,code,price\n");
scanf("%s%d%f",&name[i],&code[i],&price[i]);
}
}
else
printf("Enter item num <10");
goto start;
//printing table
printf("%-12s %-10s %-8s\n","Name","Code","Price");
for(i=0;i<num;i++)
{
printf("%12s%10dRs.%8.2f\n",name[i],code[i],price[i]);
}
getch();
}
