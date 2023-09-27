/*5.07 Write a program to print floyd triangle
 Modify the triangle to print binary numbers
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=1,n;
clrscr();
printf("Enter the number of rows\n");
scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	for(j=i;j>0;j--)
	{
	printf("%3d ",k++);
	}
	printf("\n");
	}
k=1;
printf("Triangle Successfully printed\nprinting second triangle\n");

for(i=0;i<=n;i++)
{
for(j=i;j>0;j--)
{
k++;
if(k%2==1)
printf("%3d",1);
else
printf("%3d",0);
}
printf("\n");
}
getch();
}
