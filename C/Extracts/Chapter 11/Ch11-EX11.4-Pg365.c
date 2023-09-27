/*---------- ACCESSING ARRAYS USING POINTERS --------*/
#include <stdio.h>
#include <conio.h>
void main()
   {
       int *p,i,sum=0;
       int x[5] = {5,9,6,3,7};
       i  = 0;
       p  = x;		  /* initializing with base address of x */
       printf("Element   Value   Address\n\n");
       while(i < 5)
       {
	  printf("x[%d]       %d       %u\n", i, *p, p);
	  sum = sum + *p;   /* accessing array element  */
	  i++, p++;        /* incrementing pointer     */
       }
       printf("\nSum    =  %d\n", sum);
       printf("\n&x[0]  =  %u\n", &x[0]);
       printf("\np      =  %u\n", p);
       getch();
   }
