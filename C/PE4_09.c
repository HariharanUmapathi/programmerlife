/*4.09 Write a program to read the name ANIL KUMAR GUPTA in three parts using scanf statement
     and to display the same in the following format using printf
     (a)ANIL K. GUPTA
     (b)A.K GUPTA
     (c)GUPTA A.K
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
char fname[10],mname[10],lname[10];
scanf("%s",fname);
scanf("%s",mname);
scanf("%s",lname);
printf("%s %c.%s\n",fname,mname[0],lname);
printf("%c.%c %s\n",fname[0],mname[0],lname);
printf("%s %c.%c\n\n",lname,fname[0],mname[0]);
getch();
}
