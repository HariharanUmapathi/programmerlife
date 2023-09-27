#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int validate(char a[15])
{
int static i,length,min,max,space,punct,digit,result;
length=strlen(a);
if(length<10)
max=1;
if(length<5)
min=1;
for(i=0;i<=length;i++)
{
if(ispunct(a[i]))
punct++;
if(isspace(a[i]))
space++;
if(isdigit(a[i]))
digit++;
}
printf("no of symbols :%4d\n",punct);
printf("no of space   :%4d\n",space);
printf("no of digit   :%4d\n",digit);
printf("no of letters :%4d\n",length);
if(punct!=0 && space==0 && digit!=0 && length<10 &&length >5)
result=1;
else
result=0;
return result;
}

int main()
{
char password[15];
clrscr();
printf("Enter a password\n");
gets(password);
if(validate(password))
printf("%s is a valid password\n",password);
else
printf("%s is not a valid password\n",password);
getch();
return 0;
}