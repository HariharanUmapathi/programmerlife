/*Program to Sort A Given Set of Names*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,n;
	char name[20][20],temp[20];
	clrscr();
	printf("Enter the number of Names:");
	scanf("%d",&n);
	printf("Enter the Names on per line:\n\n");
	for(i=0;i<n;i++)
		scanf("%20s",&name[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
		if(strcmp(name[i],name[j])>0)
		{
		strcpy(temp,name[i]);
		strcpy(name[i],name[j]);
		strcpy(name[j],temp);
		}
		}
printf("\nSorted name are..:\n\n");
for(i=0;i<n;i++)
	{
	printf("%s",name[i]);
	printf("\n");
	}
	getch();
}