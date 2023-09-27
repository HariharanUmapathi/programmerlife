/*--------------------- INVESTMENT PROBLEM --------------------*/
# include <stdio.h>
# include <conio.h>
#define PERIOD	10
#define PRINCIPAL	5000.00
/*-------------------- MAIN PROGRAM BEGINS --------------------*/
void main()
{ /*------------------- DECLARATION STATEMENTS ----------------*/
	int year;
	float amount, value, inrate;
/*------------------- ASSIGNMENT STATEMENTS -------------------*/
	amount 	= 	PRINCIPAL;
	inrate 	=	0.11;
	year	=	0;
/*------------------ COMPUTATION STATEMENTS -------------------*/
/*--------------- COMPUTATION USING While LOOP ----------------*/
	while(year <= PERIOD)
	{	printf("%2d		%8.2f\n",year, amount);
		value	=	amount + inrate * amount;
		year		=	year + 1;
		amount		=	value;
	}
/*----------------------- while LOOP ENDS ---------------------*/
        getch();
}
/*------------------------ PROGRAM ENDS -----------------------*/
