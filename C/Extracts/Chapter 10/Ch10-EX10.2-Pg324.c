/*---------- COMPARING STRUCTURE VARIABLES --------*/
#include <stdio.h>
#include <conio.h>
struct class
   {
       int  number;                                                 
       char name[20];                                               
       float marks;                                                 
   };                                                               
                                                                    
void main()
   {
       int  x;
       struct class student1 = {222,"Reddy", 67.00};
       struct class student2;

       student2 = student1;

       x = ((student2.number ==  student1.number) &&
	    (student2.marks  ==  student1.marks)) ? 1 : 0;

       if(x == 1)
      {
		printf("\nstudent1 and student2 are same\n\n");
	   printf("%d %s %f\n", student2.number,
				student2.name,
				student2.marks);
       }
       else
	   printf("\nstudent1 and student2 are different\n\n");

       getch();
   }
