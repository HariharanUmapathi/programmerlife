/*4.02 Write a program to evaluate following functions    
(a) (x+y)/(x-y)   (b) (x+y)/2     (c)(x+y)*(x-y);
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float x,y,a1,a2,a3;
printf("Enter x and y:\n");
scanf("%f%f",&x,&y);
a1=(x+y)/(x-y);
a2=(x+y)/2;
a3=(x+y)*(x-y);
printf("x=%6f,y=%6f\n",x,y);
printf("(x+y)/(x-y)=%6f,\n",a1);
printf("(x+y)/2=%6f,\n",a2);
printf("(x+y)(x-y)=%6f\n",a3);
getch();
}
