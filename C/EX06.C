#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x,xn,xn1;
int iter, maxiter;
float fn(float x),dfn (float x);
clrscr();
printf("Enter initial value for x[except 1 or -1]:");
scanf("%f",&x);
printf("Enter the maximum no. of iteratin:\n");
scanf("%d",&maxiter);
iter=1;
xn=x;
while(iter<=maxiter)
{
xn1=xn-fn(xn)/dfn(xn);
if(fabs(xn-xn1)<1.0e-4)
{
printf("\n The solution after %d iteration %f\n",iter,xn);
}
xn=xn1;
iter++;
}
printf("\n The solution does not coverge after %d iteration",maxiter);
getch();
}
float fn(float x)
{
return (x*x*x-3*x-5);
}
float dfn(float x)
{
return (3*x*x-3);
}