#include<stdio.h>
#include<conio.h>
void print(float a[50][50],int n)
{int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n+1;j++)
{
printf("%6.2f",a[i][j]);
}
printf("\n");
}
}
void main()
{
int i,j,k,n;
float a[50][50],term,x[50];
clrscr();
printf("Enter the number of equations to be solved:\n");
scanf("%d",&n);
printf("\n");
printf("\n Enter the element of augumented matrix:\n");

for(i=0;i<n;i++)
for(j=0;j<n+1;j++)
{
scanf("%f",&a[i][j]);
}

 for(j=0;j<n;j++)
 {
 for(i=0;i<n+1;i++)
 {
   if(i>j)
   {
   term=a[i][j]/a[j][j];
   for(k=0;k<n+1;k++)
   a[i][k]=a[i][k]-(term*a[j][k]);
   }
 }
 }
 print(a,n);
 x[n-1]=a[n-1][n]/a[n-1][n-1];

 for(i=n-1;i>=0;i--)
 {
 term=0;
 for(j=i+1;j<n;j++)
 {
 term+=a[i][j]*x[j];
 }
 x[i]=(a[i][n]-term)/a[i][i];
 }
 printf("\n The Solution vector is: \n");


 for(i=0;i<n;i++)
 printf("x[%d]=%6.2f\n",i+1,x[i]);

 getch();
 }