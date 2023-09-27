/*---------- USING GOTO STATEMENT IN A LOOP --------*/
#include <stdio.h>
#include <conio.h>
#define   LOOP       100
#define   ACCURACY   0.0001
void main()
   {                                                               
       int n;                                                      
       float x, term, sum;                                         
                                                               
       printf("Input value of x : ");                               
       scanf("%f", &x);                                        
       sum = 0 ;                                               
       for (term = 1, n = 1 ; n <= LOOP ; ++n)
       {                                                           
           sum += term ;                                       
	   if (term <= ACCURACY)
              goto output; /* EXIT FROM THE LOOP */                
           term *= x ;                                         
       }                                                       
       printf("\nFINAL VALUE OF N IS NOT SUFFICIENT\n");             
       printf("TO ACHIEVE DESIRED ACCURACY\n");                    
       goto end;                                                   
       output:                                                     
       printf("\nEXIT FROM LOOP\n");                                 
       printf("Sum = %f;  No.of terms = %d\n", sum, n);             
       end:                                                        
       ;       /* Null Statement */                                                    
       getch();
   }
