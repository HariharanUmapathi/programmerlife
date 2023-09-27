/*Runge Kutta forth order method*/
#include<stdio.h>
#include<conio.h>
float f(float x,float y);
void main()
{
float x0,y0,y1,h,xn,k1,k2,k3,k4;
clrscr();
printf("\nEnter the initial value x0:");
scanf("%f",&x0);
printf("\nEnter the initial value y0:");
scanf("%f",&y0);
printf("\nEnter the increment value h:\n");
scanf("%f",&h);
printf("Enter the final value xn:\n");
scanf("%f",&xn);
while(x0<xn)
{
k1=(h*f(x0,y0));
k2=(h*f(x0+0.5*h,y0+0.5*k1));
k3=(h*f(x0+0.5*h,y0+0.5*k2));
k4=(h*f(x0+0.5*h,y0+0.5*k3));
y1=y0+((k1+2*k2+2*k3+k4)/6);
printf("\nThe value of y at %f is %f\n",x0+h,y1);
x0=x0+h;
y0=y1;
}
getch();
}
/*function definition*/
float f(float x,float y)
{
return (1.0+x*y);
}