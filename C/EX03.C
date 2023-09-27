#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
clrscr();
printf("Enter the row size and column size of A\n");
scanf("%d%d",&m,&n);
printf("Enter the row size and column size of B\n");
scanf("%d%d",&p,&q);
printf("Enter the elements of matrix A \n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
printf("a[%d][%d]\n",i+1,j+1);
scanf("%d",&a[i][j]);
}
printf("Enter the elements of matrix B \n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
{
printf("b[%d][%d]\n",i+1,j+1);
scanf("%d",&b[i][j]);
}

printf("The given matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("\t%d",a[i][j]);
printf("\n");
}
printf("The given matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
printf("\t%d",b[i][j]);
printf("\n");
}
if(m==p&& n==q)
{
for(i=0;i<m;i++)
for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];
printf("The sum of 2 given matrix is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("\t%d",c[i][j]);
printf("\n");
}}
else
printf("The given matrix is can't be added\n");

getch();

}