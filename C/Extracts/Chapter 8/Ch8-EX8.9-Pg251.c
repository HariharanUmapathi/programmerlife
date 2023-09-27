/*---------- SORTING OF STRINGS --------*/
#include <stdio.h>
#include <conio.h>
#define ITEMS   5
#define MAXCHAR 20
void main( )
   {
  char string[ITEMS][MAXCHAR], dummy[MAXCHAR];
	int  i = 0, j = 0;
       /* Reading the list */
       printf ("Enter names of %d items \n",ITEMS);
       while (i < ITEMS)
	    scanf ("%s", string[i++]);
       /* Sorting begins */
       for (i=1; i < ITEMS; i++) /* Outer loop begins */
       {
 for (j=1; j <= ITEMS-i ; j++) /*Inner loop begins*/
	    {
		 if (strcmp (string[j-1], string[j]) > 0)
		 {   /* Exchange of contents */
		     strcpy (dummy, string[j-1]);
		     strcpy (string[j-1], string[j]);
		     strcpy (string[j], dummy );
		 }
	    } /* Inner loop ends */
       } /* Outer loop ends */
       /* Sorting completed */
       printf ("\nAlphabetical list \n\n");
       for (i=0; i < ITEMS ; i++)
	   printf ("%s\n", string[i]);
       getch();
   }
