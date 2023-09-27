#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int i,j,k,n,maxiter,iter=0;
float a[50][50],term,xold[50],xnew[50];
_clrscr();
printf("\nEnter the number of equations to be solved:");
scanf("%d",&n);
printf("\nEnter the maximum no of iterations:\n");
scanf("%d",&maxiter);
printf("\nEnter the element of augumented matrix\n");
for(i=1;i<=n;i++)
	{
	 for(j=1;j<=n+1;j++)
	 {
	 scanf("%f",&a[i][j]);
	 }
	}
	
printf("\n The given augumented matrix\n");
for(i=1;i<=n;i++)
	{
	for(j=1;j<=n+1;j++)
	{
	printf("%7.2f",a[i][j]);
	}
	printf("\n");
	}
for(i=0;i<=n;i++)
{
	xold[i]=xnew[i]=0.0;
}
while(iter<maxiter)
{
	for(i=1;i<=n;i++)
	{
	term=0.0;
		for(j=1;j<=n;j++)
		{
		if(j<i)
		{
			term+=a[i][j]*xnew[j];
		}
		else if(j==i)
		{
			continue;
		}
		else
		{
			term+=a[i][j]*xold[j];
		}
		
	}
	xnew[i]=(a[i][n+1]-term)/a[i][j];
}
iter++;
for(k=1;k<=n;k++)
{
	if(fabs(xnew[k]-xold[k])<1.0e-10)
	{
		continue;
	}
	else
	{
		for(i=1;i<=n;i++)
		xold[i]=xnew[i];
		break;
	}
}
if(k>n)
	break;
else
	continue;
}
printf("\nThe Solution vector after  %d iterations\n",iter);
for(i=1;i<=n;i++)
	printf("x[%d]=%6f\n",i,xnew[i]);
_getch();
}
