/*5.02 Write a program to find the number of and sum of all integers greater than 100 and less than 200
    That are divisible by 7.
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,count=0;
for(i=100;i<=200;i++)
	{if(i%7==0)
		{
		printf("%d\n",i);
		sum=sum+i;
		count++;
		}
	}
printf("Count:%d,Sum=%d.\n",count,sum);
getch();
}
