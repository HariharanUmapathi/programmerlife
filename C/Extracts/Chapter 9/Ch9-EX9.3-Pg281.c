/*---------- FUNCTION WITH ARGUMENTS AND RETURN VALUES --------*/
#include <stdio.h>
#include <conio.h>
void printline (char ch, int len);
     value (float, float, int);

void main( )
{
	float principal, inrate, amount;
	int period;
	printf("Enter principal amount, interest");
	printf(" rate, and period\n");
	scanf("%f %f %d", &principal, &inrate, &period);
	printline ('*' , 52);
	amount = value (principal, inrate, period);
	printf("\n%f\t%f\t%d\t%f\n\n",principal,
		inrate,period,amount);
	printline('=',52);
	getch();
}
void printline(char ch, int len)
{
	int i;
	for (i=1;i<=len;i++) printf("%c",ch);
	printf("\n");
}
value(float p, float r, int n) /* default return type */
{
	int year;
	float sum;
	sum = p; year = 1;
	while(year <=n)
{
		sum = sum * (1+r);
		year = year +1;
	}
	return(sum);	    /* returns int part of sum */
}
