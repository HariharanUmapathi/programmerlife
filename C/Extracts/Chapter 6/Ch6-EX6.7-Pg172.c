/*---------- USING CONTINUE STATEMENT --------*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
   {
       int count, negative;
       double number, sqroot;

       printf("Enter 9999 to STOP\n");
       count = 0 ;
       negative = 0 ;

       while (count <= 100)
       {
	   printf("Enter a number : ");
	   scanf("%lf", &number);
	   if (number == 9999)
	      break;     /* EXIT FROM THE LOOP */
	   if (number < 0)
	   {
	      printf("Number is negative\n\n");
	      negative++ ;
	      continue;  /* SKIP REST OF THE LOOP */
	   }
	   sqroot = sqrt(number);
	   printf("Number      = %lf\nSquare root = %lf\n\n",number, sqroot);
	   count++ ;
       }
       printf("Number of items done = %d\n", count);
       printf("\n\nNegative items       = %d\n", negative);
       printf("END OF DATA\n");
       getch();
   }
