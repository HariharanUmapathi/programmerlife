#include<stdio.h>
#include<conio.h>
#define MAXGIRLS 4
#define MAXITEM 3
void main()
{
int value[MAXGIRLS][MAXITEM];
int girls_total[MAXGIRLS],item_total[MAXITEM];
int i,j,grand_total;
clrscr();
printf("Input data\n");
printf("Enter values ,one at a time, row wise\n\n");
for(i=0;i<MAXGIRLS;i++)
{
girls_total[i]=0;
for(j=0;j<MAXITEM;j++)
{
scanf("%d",&value[i][j]);
girls_total[i]=girls_total[i]+value[i][j];
}
}
for(j=0;j<MAXITEM;j++)
{
item_total[j]=0;
for(i=0;i<MAXGIRLS;i++)
{
item_total[j]=item_total[j]+value[i][j];
}
}
grand_total=0;
for(i=0;i<MAXGIRLS;i++)
{
grand_total=grand_total+girls_total[i];
}
printf("\nGIRLS TOTAL \n\n");
for(i=0;i<MAXGIRLS;i++)
printf("Sales girl[%d]=%d\n",i+1,girls_total[i]);
printf("\nITEM TOTALS\n\n");
for(j=0;j<MAXITEM;j++)
printf("ITEM [%d]=%d\n",j+1,item_total[j]);
printf("\nGrand total=%d\n",grand_total);
getch();
}