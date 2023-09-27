/* Program to sort a given set of Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	float a[50],temp;
	clrscr();
	printf("Enter the number of numbers to be sorted:");
	scanf("%d",&n);
	printf("\nEnter the numbers are...:\n");
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	printf("\nThe given number are..:\n");
	for(i=0;i<n;i++)
		printf("\n %8.2f",a[i]);
	printf("\n");
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	printf("\nThe sorted Numbers are...:\n\n");
	for(i=0;i<n;i++)
		printf("\n%8.2f",a[i]);
getch();
}