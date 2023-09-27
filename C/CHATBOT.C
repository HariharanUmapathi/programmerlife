#include<stdio.h>
#include<conio.h>
#include<string.h>
#define clrscr _clrscr
#define gotoxy _gotoxy
#define getch _getch
struct msgdb
{
char msg[255];
char rply[255];
}*p,m[100]={
	    {"hello","hi bby"},
	    {"enna pandra?","summa vty nee?"},
	    {"saptiya","mm sapten"},
	    {"enna pandra","Tv Pakuren"},
	    {"ena pandra","padikalam nu erukan"},
	    {"enna sapadu?","puliaanam with potato"},
	    {"nalla erukiya","fine anga"},
	    {"bye,","athukullava"},
	    {"HI","hi"},
	    {"gm","Good Morning"},
	    {"gaftn","Good afternoon"},
	    {"gn","Good night"}
	    };
void main()
{
char msg[255];
int i,j=3;
clrscr();
printf("Chatbot");
printf("\nhi");
do
{
gets(msg);
for(i=0;i<10;i++)
{
if(0==strcmp(m[i].msg,msg))
{
gotoxy(20,j);
printf("%s",m[i].rply);
j++;
}
gotoxy(j,0);
}
}
while(strcmp(msg,"bye"));
gotoxy(20,j);
printf("bye");
getch();
}
