#include<stdio.h>
#include<conio.h>
double Sqrt(double x);
double Curt(double x);
double accur=0.00001;
double cube(double x);
double v;
int main()
{
clrscr();
//printf("Enter number find square root\n");
printf("Enter number to find cube root\n");
scanf("%lf",&v);
printf("Cube root of %lf is %.40lf",v,Curt(v));
getch();
return 0;
}
/*double f(double x)
{
return (x*x)-v;
}
double fd(double x)
{
return 2*x;
} */
double f3(double x)
{
return (x*x*x)-v;
}
double f3d(double x)
{
return 3*x*x;
}
double Curt(double x)
{
double xn=x,xn1=0,result,c,i=10;
while(i--)
{
xn1=xn-(f3(xn)/f3d(xn));
xn=xn1;
result=xn1;
if(xn-xn1)
printf("%lf",xn1-xn);
c++;
printf("%lf:%lf%lf\n",c,result,cube(xn1));
}
return result;
}
double cube(double x)
{
return x*x*x;
}
/*double Sqrt(double x)
{
double xn=x,xn1=0,result,c,i=10000;
while(i--)
{
xn1=xn-(f(xn)/fd(xn));
xn=xn1;
result=xn1;
c++;
}
return result;
}
  */