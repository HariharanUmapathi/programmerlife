/*---------- IDENTIFYING SCANF INPUT ERRORS --------*/
#include <stdio.h>
#include <conio.h>
void main()
   {
       int a;
       float b;
       char c;
       printf("Enter values of a, b and c\n");
       if (scanf("%d %f %c", &a, &b, &c) == 3)
	  printf("a = %d  b = %f   c = %c\n" , a, b, c);
       else
	  printf("Error in input.\n");
       getch();
   }
