/*---------- USING realloc FUNCTION --------*/
#include <stdio.h>
#include<stdlib.h>
#define NULL 0
#include <conio.h>
void main()
{
	char *buffer;
	/* Allocating memory */
	if((buffer = (char *)malloc(10)) == NULL)
	{
		printf("malloc failed.\n");
		exit(1);
	}
	printf("Buffer of size 10 created \n");
	strcpy(buffer, "HYDERABAD");
	printf("\nBuffer contains: %s \n ", buffer);
	/* Realloction */
	if((buffer = (char *)realloc(buffer, 15)) == NULL)
	{
		printf("Reallocation failed. \n");
		exit(1);
	}
	printf("\nBuffer size modified. \n");
	printf("\nBuffer still contains: %s \n",buffer);
	strcpy(buffer, "SECUNDERBAD");
	printf("\nBuffer now contains: %s \n",buffer);
/* Freeing memory */
       free(buffer);
       getch();
 }

