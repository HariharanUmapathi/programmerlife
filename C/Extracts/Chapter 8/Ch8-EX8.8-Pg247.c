/*---------- USING STRING HANDLING FUNCTIONS --------*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
   {   char  s1[20], s2[20], s3[20];
       int   x, l1, l2, l3;                                    
       printf("\n\nEnter two string constants \n");            
       printf("?");                                            
       scanf("%s %s", s1, s2);                                 
    /* comparing s1 and s2 */                                  
       x = strcmp(s1, s2);                                     
       if(x != 0)                                              
       {   printf("\n\nStrings are not equal \n");             
           strcat(s1, s2);   /* joining s1 and s2 */           
       }                                                       
       else                                                    
           printf("\n\nStrings are equal \n");                 
   /* copying s1 to s3 */
       strcpy(s3, s1);                                         
    /* Finding length of strings */                            
       l1 = strlen(s1);                                        
       l2 = strlen(s2);                                        
       l3 = strlen(s3);                                        
    /* output */                                               
       printf("\ns1 = %s\t length = %d characters\n", s1, l1); 
       printf("s2 = %s\t length = %d characters\n", s2, l2);   
       printf("s3 = %s\t length = %d characters\n", s3, l3);   
       getch();
   }
