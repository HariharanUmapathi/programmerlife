/*---------- USING FORMAT SPECIFIERS FOR STRINGS --------*/
#include <stdio.h>
#include <conio.h>
void main()
   {
       char  country[15] = "United Kingdom";

       printf("\n\n");
       printf("*123456789012345*\n");
       printf(" --------------- \n");

       printf("%15s\n", country);
       printf("%5s\n", country);
       printf("%15.6s\n", country);
       printf("%-15.6s\n", country);
       printf("%15.0s\n", country);
       printf("%.3s\n", country);
       printf("%s\n", country);
       printf("---------------- \n");
       getch();
   }
