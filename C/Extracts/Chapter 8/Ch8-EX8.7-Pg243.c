/*---------- CONCATENATING STRINGS --------*/
#include <stdio.h>
#include <conio.h>
void main()
   {
       int  i, j, k ;
       char   first_name[10] = {"VISWANATH"}  ;
       char  second_name[10] = {"PRATAP"} ;
       char    last_name[10] = {"SINGH"} ;
       char   name[30] ;
     /* Copy first_name into name */
       for( i = 0 ; first_name[i] != '\0' ; i++ )
	  name[i] = first_name[i] ;
     /* End first_name with a space */
       name[i] = ' ' ;
     /* Copy second_name into name */
       for( j = 0 ; second_name[j] != '\0' ; j++ )
	  name[i+j+1] = second_name[j] ;
     /* End second_name with a space */
       name[i+j+1] = ' ' ;
     /* Copy last_name into name */
       for( k = 0 ; last_name[k] != '\0'; k++ )
	  name[i+j+k+2] = last_name[k] ;
     /* End name with a null character */
       name[i+j+k+2] = '\0' ;
       printf("\n\n") ;
       printf("%s\n", name) ;
       getch();
   }
