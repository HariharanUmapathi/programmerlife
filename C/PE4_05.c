/*4.05 Write an interactive program to demonstrate the process of multiplication. The program should ask the user to enter two two-digit integers and print the product of integers as shown below

                   35
               	 x    47
                ----------
  7x 35 is             245
  4x 35 is            140
                ----------
add them              1645

Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
printf("\t\t%10d\n",a);
printf("\t\tx%9d\n",b);
printf("\t\t----------\n");
printf("%3dx%3d is\t%10d\n",b%10,a,a*(b%10));
printf("%3dx%3d is\t%9d\n",b/10,a,a*(b/10));
printf("\t\t----------\n");
printf("add them\t%10d\n",a*(b%10)+10*a*(b/10));
getch();
}
