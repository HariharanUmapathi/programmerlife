#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,r;
long int ncr;
long int fact(int n);
clrscr();
printf("\nProgram for ncr values \n");
printf("-------------------------\n");
printf("Enter  n values and r values\n");
scanf("%d%d",&n,&r);
ncr=fact(n)/(fact(r)*fact(n-r));
printf("The ncr value is :%d \n",ncr);
getch();
}
long int fact (int n)
{
long int f;
if(n==0)
return (1);
else
{
f=n*fact(n-1);
return f;
}
}