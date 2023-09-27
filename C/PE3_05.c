/*3.5 Write a program to read three values using scanf statement and print the following results:
(a) sum of the values;
(b)Average of the three values
(c) Largest of the three
(d) Smallest of the three
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,sum,avg,max,min;
clrscr();
printf("Enter values for a,b,c:\n");
scanf("%f%f%f",&a,&b,&c);
sum=a+b+c;
avg=(sum)/3;
if(a>b&&a>c)
max=a;
if(b>a&&b>c)
max=b;
else
max=c;
if((a<b)&&(a<c))
min=a;
if((b<a)&&(b<c))
min=b;
if((c<a)&&(c<b))
min=c;
printf("entered number are: %f %f %f\n",a,b,c);
printf("Sum  of the given number    =%f\n",sum);
printf("average of the given numbers=%f\n",avg);
printf("Largest number is            %f\n",max);
printf("Smallest number is           %f",min);
getch();
}
