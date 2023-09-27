/*------------ USING FORMATTED  STRING INPUT ----------*/
# include <stdio.h>
# include <conio.h>

void main()
   {
       char name1[15], name2[15], name3[15];
       printf("Enter the 1st String\n");
       scanf("%15c", name1);
       printf("1st String\n\n%15s\n\n", name1);
       printf("Enter the 2nd String\n");
       scanf("%s", name2);
       printf("2nd String\n\n%15s\n\n", name2);
       printf("Enter the 3rd String\n");
       scanf("%15s", name3);
       printf("3rd String\n\n%15s\n\n", name3);
       getch();
   }
