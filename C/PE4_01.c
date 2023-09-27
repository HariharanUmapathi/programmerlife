/*4.01 Given the string "WORDPROCESSING.     write a program to read the string form the terminal and display the same in the following formats   
(a)WORD PROCESSING     
(b)WORD    
 PROCESSING    
 (c)W.P
Program:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char string[20];
clrscr();
printf("Enter String:");
scanf("%s",string);
for(i=0;i<=strlen(string);i++)
{
printf("%c",string[i]);
	if(i==3)
	printf(" ");
}
printf("\n");
i=0;
while(i<=strlen(string))
{
printf("%c",string[i]);
if(i==3)
printf("\n\t");
i++;
}
printf("\n%c.%c",string[0],string[4]);
getch();
}
