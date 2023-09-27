/*---------- USING STRUCTURE POINTERS --------*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

struct invent
   {
       char  *name[20];
       int   number;
       double price;
   };

void main()
   {
      struct invent product[3], *ptr;
      printf("INPUT\n\n");
      for(ptr = product; ptr < product+3; ptr++)
	scanf("%s %d %lf", ptr->name, &ptr->number, &ptr->price);
      printf("\nOUTPUT\n\n");
       ptr = product;
       while(ptr < product + 3)
       {
	   printf("%-20s %5d %10.2f\n", ptr->name, ptr->number, ptr->price);
	   ptr++;
       }
      getch();
   }
