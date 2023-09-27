/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	int i,flag,n,number[1000],min,min2;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&number[i]);

	//finding first small number
	min=number[0];
	for(i=0;i<n;i++)
	{
	if(number[i]<min)
	min=number[i];
	}
flag=0;
	for(i=0;i<n;i++){
	if(number[i]<min2 && number[i]>min)
	{min2=number[i];
		
	flag=1;}
	}

	printf("%d",min+min2);
	return 0;
}
