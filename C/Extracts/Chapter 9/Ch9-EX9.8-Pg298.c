/*---------- USING GLOBAL VARIABLES --------*/
#include <stdio.h>
#include <conio.h>

int fun1(void);
int fun2(void);
int fun3(void);
int x ;			/* global */

void main( )
   {
	x = 10 ; 	/* global x */
	printf("x = %d\n", x);
	printf("x = %d\n", fun1());
	printf("x = %d\n", fun2());
	printf("x = %d\n", fun3());
	getch();
   }
   fun1(void)
   {
	return(x = x + 10);
   }
   int fun2(void)
   {
	int x ; 		/* local */
	x = 1 ;
	return (x);
   }
   fun3(void)
   {
	return(x = x + 10); 	/* global x */
   }
