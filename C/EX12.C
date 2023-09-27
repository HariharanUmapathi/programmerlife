#include<stdio.h>
#include<conio.h>
void main()
{
struct emp
{
char name[10];
int age, basic;
float da,hra,lic,gross,net;
}e[10];
int n,i;
clrscr();
printf("\nHow many numbers you input:");
scanf("%d",&n);
printf("\n\t\tPAY ROLL CALCULATION\n");
printf("\n\t\t********************\n");
for(i=0;i<n;i++)
{
printf("\n Enter the employee #%d details\n",i+1);
printf("\n\tName :");
scanf("%s",&e[i].name);
printf("\n\tAge  :");
scanf("%5d",&e[i].age);
printf("\n\tBasic:");
scanf("%d",&e[i].basic);
e[i].da=e[i].basic*0.10;
e[i].hra=e[i].basic*0.20;
e[i].lic=200;
e[i].gross=e[i].basic+e[i].da+e[i].hra;
e[i].net=e[i].gross-e[i].lic;
clrscr();
}
printf("OUTPUT\n");
for(i=0;i<n;i++)
{
printf("\n\nEMPLOYEE %d DETAILS",i+1);
printf("\n******************");
printf("\n\t Name : %s",e[i].name);
printf("\n\t Age  : %d",e[i].age);
printf("\n\t Basic: %d",e[i].basic);
printf("\n\t Da   : %7.2f",e[i].da);
printf("\n\t Hra  : %7.2f",e[i].hra);
printf("\n\t Lic  : %7.2f",e[i].lic);
printf("\n\t Gross: %7.2f",e[i].gross);
printf("\n\t Net  : %7.2f",e[i].net);
}

getch();
}