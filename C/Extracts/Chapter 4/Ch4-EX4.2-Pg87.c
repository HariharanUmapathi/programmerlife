/*------------------- PROGRAM USING CHARACTER TYPES -------------------*/
#include  <stdio.h>
#include  <ctype.h>
#include <conio.h>
void  main()
   {
       char character;
       printf("Press any key\n");
       character = getchar();
       if (isalpha(character) > 0)
	  printf("The character is a letter.");
       else
	  if (isdigit (character) > 0)
	     printf("The character is a digit.");
	  else
	     printf("The character is not alphanumeric.");
       getch();
   }
