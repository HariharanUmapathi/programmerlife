#include<stdio.h>
#include<conio.h>
float det(float mat[3][3]);
void showmat(float mat[3][3]);
void main()
{
  float d1,d2,d3,d4,//determinant value
	mat[3][4],  //co-effiecient storing matrix
	det1[3][3], //determinant 1
	det2[3][3], //determinant 2
	det3[3][3], //determinant 3
	det4[3][3]; //determinant 4
  int i,j;
clrscr();


//matrix taking value
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("value[%d][%d]=",i+1,j+1);
scanf("%f",&mat[i][j]);
clrscr();
}
}

//Showing the content of the Matrix.
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%8.2f ",mat[i][j]);
if(j==3)
printf("\n");
}
}
printf("\n\n");
//alotting values to each small matrix
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
det1[i][j]=mat[i][j];

det2[j][0]=mat[j][3];
det2[j][1]=mat[j][1];
det2[j][2]=mat[j][2];

det3[j][0]=mat[j][0];
det3[j][1]=mat[j][3];
det3[j][2]=mat[j][2];

det4[j][0]=mat[j][0];
det4[j][1]=mat[j][1];
det4[j][2]=mat[j][3];
}
}
showmat(det1);
showmat(det2);
showmat(det3);
showmat(det4);

if(d1!=0)
{
float x=d2/d1,y=d3/d1,z=d4/d1;
printf("Solutions:x=%f,y=%f,z=%f",x,y,z);
}
else
{
if(d2==0&&d3==0&&d4==0)
printf("Linear system is consistent");
else
printf("Linear system is not consistent");
}
getch();
}
float det(float m[3][3])
{
float result;
result=m[0][0]*((m[1][1]*m[2][2])-(m[2][1]*m[1][2]))-
       m[0][1]*((m[1][0]*m[2][2])-(m[2][0]*m[1][2]))+
       m[0][2]*((m[1][0]*m[2][1])-(m[1][1]*m[2][0]));
return result;
}


void showmat(float mat[3][3])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%8.2f",mat[i][j]);
if(i==1&&j==2)
printf("     detval=%f",det(mat));
if(j==2)
printf("\n");
}
}
printf("\n");
}