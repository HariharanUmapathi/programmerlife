/*Gauss elimination method*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
float a[50][50],term,x[50],y[50];
clrscr();
printf("Enter the number of Equations to be solved:\n");
scanf("%d",&n);
printf("Enter the element of augumented Matrix;\n");
for(i=1;i<=n;i++)
for(j=1;j<=n+1;j++)
scanf("%f",&a[i][j]);
for(i=2;i<=n;i++)
for(j=1;j<=n;j++)
{
	term=a[i][i-1]/a[i-1][i-1];
	for(k=i-1;k<=n;k++)
	a[i][k]=term*a[i-1][k];
}
for(i=1;i<=n;i++)
y[i]=a[i][k];
x[n]=y[n]/a[n][n];
for(i=n-1;i>=1;i--)
{
term=0;
for(k=i+1;k<=n;k++)
term+=a[i][k]*x[k];
x[i]=(y[i]-term)/a[i][j];
}
printf("\nThe solution Vector is:\n");
for(i=1;i<=n;i++)
printf("x[%d]=%6.2f",i,x[i]);
getch();
}