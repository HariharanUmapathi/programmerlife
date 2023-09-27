#include<stdio.h>

int sum(int a[10],int b)
{
int i,total=0;
for(i=0;i<b;i++)
total+=a[i];
return total;
}

void show(int c[10][10],int s[10],int d[10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("%5d",c[i][j]);
}
printf("%5d\n",s[i]);
}
for(i=0;i<n;i++)
printf("%5d",d[i]);
printf("\n");
}
int min(int a,int b)
{
return (a>b)?b:a;
}

int *minimum(int c[10][10],int rn,int n,int index)
{
int *sort[10],*min,i,j;
for(i=0;i<n;i++)
{
sort[i]=&c[rn][i];
}

for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
int *p1=sort[i],*p2=sort[j];
if(*p1>*p2)
{
int *temp=p1;
p1=p2;
p2=temp;
sort[i]=p1;
sort[j]=p2;
}
}
return sort[index];
}
void parray(int x[10][10],int m,int n)
{int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%5d",x[i][j]);

printf("\n");}
}
int main(void)
{
int c[10][10]={{6,4,8,4,9,6},{6,7,13,6,8,12},{3,9,4,5,9,13},{10,7,11,6,11,10}};
int s[10]={4,5,3,9};
int d[10]={4,4,5,3,2,3};
int x[10][10],cost=0;

int m=4,n=6;
int i,j;
int diff=sum(s,m)-sum(d,n);
printf("Total Supply =%d\n",sum(s,m));
printf("Total Demand =%d\n",sum(d,n));
//checking for balance problem
if(diff)
	{
	printf("Problem is unbalanced by %d units\n",(diff<0)?-1*diff:diff);
	if(diff<0)
	{
	printf("we have to balance the transportation problem by adding dummy entry on Supply\n");
	s[m]=-1*diff;
	m++;
	}
	else
	{
	printf("we have to balance the transportation problem by adding dummy entry on Demand\n");
	d[n]=diff;	
	n++;
	}
	}
else
	printf("This Problem is balanced\n");
show(c,s,d,m,n);
//Allocation part

for(i=0;i<m;i++)
{
//Sorting elements in row
int index=0;
for(j=0;j<n;j++)
{
int *p3=minimum(c,i,n,index);
if(&c[i][j]==p3)
	{
		
		
		x[i][j]=min(s[i],d[j]);
		s[i]-=x[i][j];
		d[j]-=x[i][j];
		if(x[i][j]!=0)		
		printf("%d %d is the current cell for alloation %d\n",i,j,x[i][j]);
		if(d[j]==0)
		{
		j=-1;
		index++;
		continue;	
		}		
		
		

		if(s[i]==0)
		break;
		else
		index++;

	}	

}

}
parray(x,m,n);
//Transportation cost 
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
cost+=x[i][j]*c[i][j];
}
printf("The Transportation Cost is %d\n",cost);
show(c,s,d,m,n);
return 0; 
}
