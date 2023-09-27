/*---------- PROGRAM TO PRINT MULTIPLICATION TABLE --------*/
#include <stdio.h>
#include <conio.h>
#define COLMAX 10
#define ROWMAX 12

void main()
   {
       int row,column, y;

       row = 1;
       printf("          MULTIPLICATION TABLE           \n");
       printf("-----------------------------------------\n");
       do    /*......OUTER LOOP BEGINS........*/
       {
	    column = 1;

	    do   /*.......INNER LOOP BEGINS.......*/
	    {
		 y = row * column;
		 printf("%4d", y);
		 column = column + 1;
	    }
	    while (column <= COLMAX); /*... INNER LOOP ENDS ...*/

	    printf("\n");
	    row = row + 1;
       }
       while (row <= ROWMAX);/*.....   OUTER LOOP ENDS   .....*/

       printf("-----------------------------------------\n");
       getch();
   }
