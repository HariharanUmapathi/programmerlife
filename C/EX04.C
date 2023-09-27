/*Matrix Multiplication*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
clrscr();
printf("Enter the row & column size of matrix A\n");
scanf("%d%d",&m,&n);
printf("Enter the row & column size of matrix B\n");
scanf("%d%d",&p,&q);
printf("Enter the Elements of matrix A\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
 {
 printf("a[%d][%d]",i+1,j+1);
 scanf("%d",&a[i][j]);
 }
printf("Enter the Elements of matrix B\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
{
 printf("b[%d][%d]",i+1,j+1);
 scanf("%d",&b[i][j]);
}
printf("\nThe given matrix A is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)

printf("\t%d",a[i][j]);
printf("\n");          }
printf("The given matrix B is\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
printf("\t%d",b[i][j]);
printf("\n");
}
if(n==p)
{
for(i=0;i<m;i++)
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
printf("The product of two matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
printf("\t%d",c[i][j]);
printf("\n");
}}
else
printf("The matrix can't be multiplied");
getch();
}