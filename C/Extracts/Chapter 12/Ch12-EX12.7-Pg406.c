/*---------- READING DATA FROM COMMAND LINE --------*/
#include  <stdio.h>
#include <conio.h>
void   main(argc, argv)
   int  argc;                    /*   argument count           */
   char *argv[];                 /*   list of arguments        */
   {
       FILE   *fp;
       int  i;
       char word[15];

       fp = fopen(argv[1], "w"); /* open file with name argv[1] */
       printf("\nNo. of arguments in Command line = %d\n\n",argc);
       for(i = 2; i < argc; i++)
	  fprintf(fp,"%s ", argv[i]); /* write to file argv[1]  */
       fclose(fp);

   /*  Writing content of the file to screen                    */

       printf("Contents of %s file\n\n", argv[1]);
       fp = fopen(argv[1], "r");
       for(i = 2; i < argc; i++)
       {
	  fscanf(fp,"%s", word);
	  printf("%s ", word);
       }

       fclose(fp);
       printf("\n\n");

   /*  Writing the arguments from memory */

       for(i = 0; i < argc; i++)
	  printf("%*s \n", i*5,argv[i]);
      getch();
   }
