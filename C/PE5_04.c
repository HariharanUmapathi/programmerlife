/*5.04 Given a list of marks ranging from 0-100. write a program to compute and the number of
    Students.
    (a)who have obtained more than 80 marks
    (b)who have obtained more than 60
    (c)who have obtained more than 40 marks
    (d)who have obtained 40 or less marks
    (d)in the range 81-100
    (e)in the range 81-100
    (f)in the range 81-100
    (h)in the range 81-100
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int mark, student=0;
int c80=0,c60=0,c40=0,c20=0;
int r1=0,r2=0,r3=0,r4=0;
clrscr();
printf("enter marks continuously put -1 to stop input\n");
do
{
scanf("%d",&mark);
if(mark>80)
{
c80++;
r1=c80;
}
if(mark>60)
{
c60++;
r2=c60-c80;
}
if(mark>40)
{
c40++;
r3=c40-c60;
}
if((mark>0)&&(mark<40))
{c20++;
r4=c20;
}
student++;
}while(mark>0);
printf("Number of students:%d\n",student-1);
printf("Number of students obtained more than 80:%3d\n",c80);
printf("Number of students obtained more than 60:%3d\n",c60);
printf("Number of students obtained more than 40:%3d\n",c40);
printf("Number of students obtained less than 40:%3d\n",c20);
printf("Students in range 81-100:%4d\n",r1);
printf("Students in range 61-80 :%4d\n",r2);
printf("Students in range 41-60 :%4d\n",r3);
printf("Students in range 0-40  :%4d\n",r4);
getch();
}
