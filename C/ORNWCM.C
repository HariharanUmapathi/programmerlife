#include<stdio.h>
#include<conio.h>
 void getmat(int a[50][50],int s[50],int d[50]);
void showtable(int a[50][50],int s[50],int d[50],int m,int n);
void ptype(int s[50],int d[50],int m,int n);
int m=3,n=3;
void main()
//north west corner rule
//transport problem
{
int *p,i,j,m=3,n=3,a[50][50],d[50],s[50];//store data table ,demand,supply;
clrscr();
getmat(a,s,d);
showtable(a,s,d,m,n);
ptype(s,d,m,n);
getch();
}
void ptype(int s[50],int d[50],int m,int n)
{
int i,j,sumsup,sumdem;
for(i=0;i<m;i++)
sumsup+=s[i];
for(j=0;j<n;j++)
sumdem+=d[j];
printf("Total Supply=%d,Total Demand=%d",sumsup,sumdem);
if(sumsup==sumdem)
printf("Balanced Transport Problem\n");
else
printf("Unbalanced Transport Problem\n");
}
void getmat(int a[50][50],int s[50],int d[50])
{
int i,j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
printf("cen[%d][%d]",i+1,j+1);
scanf("%d",&a[i][j]);
}
//getting supply list
printf("Enter supply list\n");
for(i=0;i<m;i++)
{
printf("sup[%d]",i+1);
scanf("%d",&s[i]);
}
//getting demand list
printf("Enter demand list\n");
for(i=0;i<n;i++)
{
printf("dem[%d]",i+1);
scanf("%d",&d[i]);
}
}

void showtable(int a[50][50],int s[50],int d[50],int m,int n)
{
int i,j;
clrscr();
printf("Step 1:showing table\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%5d",a[i][j]);
}
printf("%5d\n",s[i]);
printf("\n");}
for(i=0;i<n;i++)
{
printf("%5d",d[i]);
}
printf("\n");
}