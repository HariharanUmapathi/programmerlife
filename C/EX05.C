#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,found;
float a[50],k;
clrscr();
printf("Enter the Numbers in the given list is:");
scanf("%d",&n);
printf("\nEnter the data in the list one by one\n");
for(i=0;i<n;i++)
scanf("%f",&a[i]);
printf("\nEnter the number to be searched\n");
scanf("%f",&k);
found=0;

for(i=0;found==0&&i<n;i++)
{
if(a[i]==k)
found=1;
}
if(found==0)
printf("The given number is not in the list");
else
printf("The given number is in the list");
getch();
}