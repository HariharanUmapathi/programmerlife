#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int p;
int n;
double q;
clrscr();
n=0;
printf("*************************************************************\n");
printf("2 to the power of n   n                2 to the power of (-n)\n");
printf("*************************************************************\n");
for(n=0;n<15;n++)
{
if(n==0)
p=1;
else
p=p*2;
q=1.0/(double)p;
printf("\n %10ld %11d %33.12lf",p,n,q);
}
getch();
}