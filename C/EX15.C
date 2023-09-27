/*Standard Deviation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAXSIZE 100

void main()
{
int i,n;
float value[MAXSIZE],deviation,sum,sumsqr,mean,variance,stddev;
sum=sumsqr=n=0;
clrscr();
printf("Enter the Values:enter -1 to end \n");
for(i=0;i<MAXSIZE;i++)
{
scanf("%f",&value[i]);
if(value[i]==-1)
break;
sum+=value[i];
n+=1;
}
mean=sum/(float)n;
for(i=0;i<n;i++)
{
deviation=value[i]-mean;
sumsqr+=deviation*deviation;
}
variance=sumsqr/(float)n;
stddev=sqrt(variance);
printf("\nNumber of items:%d",n);
printf("\nmean=%f",mean);
printf("\nvariance=%f",variance);
printf("\nStandard deviation=%f",stddev);
getch();
}