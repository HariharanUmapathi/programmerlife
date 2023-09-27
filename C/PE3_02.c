/*3.2 Write a program to print the size of various data types in C
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
float b;
char c:
long int d;
double e;
long double f;
clrscr();
printf("Data types in C And their sizes\n");
printf("Data type  \t Size\n");
printf("int        \t %4d \n",sizeof(a));
printf("float      \t %4d \n",sizeof(b));
printf("char       \t %4d \n",sizeof(c));
printf("long int   \t %4d \n",sizeof(d));
printf("double     \t %4d \n",sizeof(e));
printf("long double\t %4d \n",sizeof(f));
getch();
}
