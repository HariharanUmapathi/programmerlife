#include<stdio.h>
#include<conio.h>
//Ascending& order
void main()
{
int n,i,j;
float a[50],temp;
clrscr();
printf("Enter the number of numbers\n");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
printf("\nThe entered numbers are\n");
for(i=0;i<n;i++)
printf("%f\n",a[i]);
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
  }
}
printf("\nThe sorted numbers are\n");
for(i=0;i<n;i++)
{
printf("%f\n",a[i]);
}
getch();
}