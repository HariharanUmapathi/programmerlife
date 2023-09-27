/*6.6 Write a program to evalueate the following investment equation 						V=P(1+r)n
and print the tables which would gice the values of V for various combination of the following values of P,r, and n
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int p=1000,n=1,l=50,i,n1=1;
float r=0.1,v=0;

//Title part of the table
	while(l--)
		printf("-");
printf("\n");
	l=50;
printf("Amount(p) Intrate(r) Years(n) Value(v)\n");
	while(l--)
		printf("-");printf("\n");
	for(i=1;i<=10;i++)
	{
	while(n1--)
			{
			v=p*(1+r);
			p=v;
			}
	printf("%7d %7.2f %7d\t %15.2f\n",i*1000,r,n,v);
	p=1000*i;
	r=0.1*i;
	n=i;
	v=0;
	n1=n;
	}
getch();
}
