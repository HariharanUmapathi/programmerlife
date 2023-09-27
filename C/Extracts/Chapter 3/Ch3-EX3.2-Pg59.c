/*----- USING SHORTHAND OPERATOR-----*/
# include <stdio.h>
# include <conio.h>
#define    N   100
#define    A   2

void   main()
   {
       int  a;

       a  =  A;
       while( a < N )
       {
	    printf("%d\n", a);
	    a *= a;
       }
       getch();
   }

