#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n;
float a,b,h,multfact,sum,value,xn;
float y(float);
clrscr();
printf("Enter the value  of lower limit & upper limit (a,b)");
scanf("%f%f",&a,&b);
evenno:printf("Enter the no of intervals (n)\n");
scanf("%d",&n);
h=(b-a)/n;
if(n<=0||n%2==1)goto evenno;
sum=0.0;
for(i=0;i<n;i++)
{
if(i==0||i==n)
multfact=1;
else if(i%2==0)
multfact=2;
else
multfact=4;
xn=a+(i*h);
sum+=multfact*y(xn);
}
value=(h/3)*sum;
printf("The value of integral simpson's method %7f",value);
getch();
}
float y(float x)
{
return (x*x*log(x));
}