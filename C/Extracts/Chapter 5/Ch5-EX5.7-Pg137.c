/*---------- PROGRAM USING GOTO STATEMENT --------*/
#include <stdio.h>
#include <conio.h>
#include  <math.h>
void main()
   {
	double x, y;
	int count;

	count = 1;

	printf("Enter FIVE real values\n");
   read:
	scanf("%lf", &x);
	printf("\n");
	if (x < 0)
	   printf("Value - %d is negative\n",count);
	else
	{
	   y = sqrt(x);
	   printf("%lf\t %lf\n", x, y);
	}
	count = count + 1;

	if (count <= 5)
   goto read;
	printf("\nEnd of computation");
	getch();
   }
