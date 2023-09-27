/*---------- PROGRAM TO DEPICT WORKING OF AUTOMATIC VARIABLES --------*/
#include <stdio.h>
#include <conio.h>

void function1(void);
void function2(void);

void main( )
   {
	int m = 1000;
	function2();

	printf("%d\n",m);	/* Third output */
	getch();
   }
   void function1(void)
   {
	int m = 10;

	printf("%d\n",m);	/* First output */
   }

                                                         
   void function2(void)                                                 
   {                                                           
        int m = 100;                                           
        function1();                                           
        printf("%d\n",m);	/* Second output */                                      
   } 
