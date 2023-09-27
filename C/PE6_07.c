/*6.7.Write a program to print the following output using for loops.
(a) 
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
(b)
* * * * *
  * * * *
    * * * 
      * *  
        *
(c)
    1
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5
Program:*/
#include<stdio.h>
#include<conio.h>
void main(){int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%3d",i);

		}
		printf("\n");
	}
	//pattern2
	printf("Pattern2\n");
	for(i=5;i>0;i--)
		{for(k=0;k<(5-i);k++)
				printf("  ");
		for(j=0;j<i;j++)
		{
		
		printf("* ");

		}printf("\n");
		}
	//pattern3
	printf("Pattern3\n");
for(i=1;i<6;i++)
	{
	for(k=6;k>i;k--)
		printf(" ");
for(j=5;j>5-i;j--)
	printf(" %d",i);
	printf("\n");
	}
getch();
}
