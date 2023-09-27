/*------------------- PROGRAM TO REVERSE CHARACTER CASE -------------------*/
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
   {
       char alphabet;
       printf("Enter an alphabet");
       putchar('\n');   /* move to next line */
       alphabet = getchar();
       if (islower(alphabet))
	  putchar(toupper(alphabet));
       else
	  putchar(tolower(alphabet));
       getch();
   }

