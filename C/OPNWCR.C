#include<stdio.h>
#include<conio.h>
int min(int x,int y)
{
int m;
return x>y?y:x;
}
void RMM(void);
int a[5]={1,4,3,5,2};
int m=3,n=3,i,j,k,l,sum_s=0,sum_d=0,count_x=0,cost=0,choice,minimum;//dimenstion
int c[10][10]={{8,3,2},{2,1,3},{3,4,6}},//constraints array
	x[10][10]={{0,0,0},{0,0,0},{0,0,0}},//basic array
	mark[10][10]={{0,0,0},{0,0,0},{0,0,0}},
	s[10]={2,6,5},//supply array
	d[10]={4,4,5};//demand array
int main()
   {
   RMM();
   getch();
   return 0;
   }
void RMM(void)
{
int mini=0;
clrscr();
printf("1.Load default Problem\n");
printf("2.Evaluate new problem\n");
scanf("%d",&choice);
if(choice!=1)
{
printf("Enter table size m & n:");
scanf("%d%d",&m,&n);
printf("\nEnter Data\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("c[%d][%d]=",i+1,j+1);
scanf("%d",&c[i][j]);
}
}
printf("\nEnter supply\n");
for(i=0;i<m;i++)
{
printf("s[%d]",i+1);
scanf("%d",&s[i]);
}
printf("\nEnter Demand\n");
for(i=0;i<n;i++)
{
printf("d[%d]",i+1);
scanf("%d",&d[i]);
}
}
//showing table:
printf("Tranport Problem Linear programming\n");
printf("Step 1:\nDestination  %*s\n",n*3,"supply");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%5d",c[i][j]);
printf("%5d\n",s[i]);
}
for(i=0;i<n;i++)
		printf("%5d",d[i]);

for(i=0;i<m;i++)
	sum_s+=s[i];
for(i=0;i<n;i++)
	sum_d+=d[i];
printf("\nTotal Supply=%d\nTotal Demand=%d\n",sum_s,sum_d);
if(sum_s==sum_d)
printf("This problem is Balanced Transport Problem\n");
	else
printf("This Problem is UnBalanced Transport Problem\n");
printf("\nStep 2:Row Minima Method\n");

//Basic cell allocation
//basic cells
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%5d",x[i][j]);
}
printf("%5d\n",s[i]);
}
for(i=0;i<n;i++)
printf("%5d",d[i]);
//basic cells counting
for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(x[i][j]!=0)
	count_x++;
printf("\nbasic cells=%d\n",count_x);
printf("m+n-1=%d+%d-1=%d",m,n,m+n-1);
printf("\n");


//finding basic degenerate or basic problem
if(m+n-1==count_x)
	printf("This problem is basic problem\n");
	else
	printf("This problem is basic degenerate problem\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
		{
		cost+=(c[i][j]*x[i][j]);
		}
printf("The cost is %d\n",cost);

getch();
}

//North west corner Rule
int NWCR(void)
{

clrscr();
//getting data tables
printf("1.Load default Problem\n");
printf("2.Evaluate new problem\n");
scanf("%d",&choice);
if(choice!=1)
{printf("Enter table size m & n:");
scanf("%d%d",&m,&n);
printf("\nEnter Data\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("c[%d][%d]=",i+1,j+1);
scanf("%d",&c[i][j]);
}
}
printf("\nEnter supply\n");
for(i=0;i<m;i++)
{
printf("s[%d]",i+1);
scanf("%d",&s[i]);
}
printf("\nEnter Demand\n");
for(i=0;i<n;i++)
{
printf("d[%d]",i+1);
scanf("%d",&d[i]);
}
}
//step 1:
//showing table:
printf("Tranport Problem Linear programming\n");
printf("Step 1:\nDestination  %*s\n",n*3,"supply");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%5d",c[i][j]);
printf("%5d\n",s[i]);
}
for(i=0;i<n;i++)
		printf("%5d",d[i]);

//finding problem type either balanced or unbalanced;
for(i=0;i<m;i++)
	sum_s+=s[i];
for(i=0;i<n;i++)
	sum_d+=d[i];
printf("\nTotal Supply=%d\nTotal Demand=%d\n",sum_s,sum_d);
if(sum_s==sum_d)
printf("This problem is Balanced Transport Problem\n");
	else
printf("This Problem is UnBalanced Transport Problem\n");
printf("\n\nStep 2\n");
//Step 2 finding basic cells
 for(i=0;i<m;i++)
	{
	if(s[i]==0)continue;
	else
	{

	 for(j=0;j<n;j++)
		{
		 if(d[j]!=0)
		 {
		 x[i][j]=min(s[i],d[j]);
		 s[i]=s[i]-x[i][j];
		 d[j]=d[j]-x[i][j];

		 }
		}
	 }
	}
//after allocation
printf("Basic cells\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%5d",x[i][j]);
printf("%5d",s[i]);
printf("\n");
}
for(i=0;i<n;i++)
{
printf("%5d",d[i]);
}
//basic cells counting
for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(x[i][j]!=0)
	count_x++;
printf("\nbasic cells=%d\n",count_x);
printf("m+n-1=%d+%d-1=%d",m,n,m+n-1);
printf("\n");


//finding basic degenerate or basic problem
if(m+n-1==count_x)
	printf("This problem is basic problem\n");
	else
	printf("This problem is basic degenerate problem\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
		{
		cost+=(c[i][j]*x[i][j]);
		}
printf("The cost is %d\n",cost);
getch();
return 0;
}
