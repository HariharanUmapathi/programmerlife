#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159
void main()
{
double x,term,newterm,sum;
int n,cond=1;
clrscr();
printf("\n Enter the value of X in degree");
scanf("%lf",&x);
x=x*(PI/180);
sum=x;
term=x;
n=1;
while(cond)
{
newterm=(-1)*term*x*x/((2*n)*(2*n+1));
if(fabs(newterm)<1.0e-10)
break;
else
{
n++;
term=newterm;
sum+=term;
}
}
printf("The value of Sin(x) by series method =%lf\n\n",sum);
printf("\n Actual Value of Sin(x)=%lf",sin(x));
getch();
}