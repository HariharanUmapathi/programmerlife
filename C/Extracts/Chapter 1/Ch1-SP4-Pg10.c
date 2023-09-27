/*------------------- PROGRAM USING FUNCTION ------------------*/
# include <stdio.h>
# include <conio.h>
int mul (int a, int b);      /*------- DECLARATION ------------*/

/*-------------------- MAIN PROGRAM BEGINS --------------------*/
void main ()
{
	int a, b, c;

	a = 5;
	b = 10;
	c = mul (a,b);

	printf ("multiplication of %d and %d is %d",a,b,c);
	getch();
}

/* ----------------	MAIN PROGRAM ENDS
	MUL() FUNCTION STARTS -----------------*/

int mul (int x, int y)
{
 int p;

 p = x*y;

 return(p);
}
/* -------------------- MUL () FUNCTION ENDS ------------------*/
