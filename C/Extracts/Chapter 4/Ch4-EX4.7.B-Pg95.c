/*---------- USING CONVERSION SPECIFIERS --------*/
#include <stdio.h>
#include <conio.h>
void main()
   {
       char address[80];

       printf("Enter address\n");
       scanf("%[^\n]", address);
       printf("%-80s", address);
       getch();
   }
