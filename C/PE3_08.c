/*3.18 Write a program to compute the values of square-roots and squares of the number 0 to 100 in steps 10 and print the output in a tabular form as shown below.
-----------------------------------------------------
Number 	Square-root 	Square
-----------------------------------------------------
0		0		0
10		…..		….
…..		…..		…..
100		10		10000
-----------------------------------------------------
Program:*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i;
clrscr();
printf("-----------------------\n");
printf("Number\tSquare-root\tSquare\n");
printf("-----------------------\n");
for(i=0;i<=100;i=i+10)
{
printf("%3d\t%.4lf\t%.4lf\n",i,sqrt(i),i*i);
}
printf("-----------------------\n");

getch();
}
