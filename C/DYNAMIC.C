#include<stdio.h>
#include<conio.h>
void main()
{
int *ptr;
int a;
ptr=&a;
*ptr=8;
printf("%d",a);
}