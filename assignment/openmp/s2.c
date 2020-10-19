#include<stdio.h>    
#include<stdlib.h>  
#include <sys/time.h>
int main(){  
int a[10][10],b[10][10],c[10][10],row,col,i,j,k;    
system("cls");  
printf("Enter the number of rows=");    
scanf("%d",&row);    
printf("Enter the number of columns=");    
scanf("%d",&col);    
printf("Enter the matrix A element=\n");    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("Enter the matrix B element=\n");    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
struct timeval t0, t1;
gettimeofday(&t0, 0);

printf("Multiplication of matrix A and matrix B: \n");    


#pragma omp parallel for
for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
{
for(int k=0; k<col; k++)
{
c[i][j]+=a[i][k]*b[k][j];    
}
}
}



for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
printf("%d\t",c[i][j]);    
}    
printf("\n");    
}    
gettimeofday(&t1, 0);
double elapsed = (t1.tv_sec-t0.tv_sec) * 1.0f + (t1.tv_usec - t0.tv_usec) / 1000000.0f;
printf("\ntime required to run %lf",e);
return 0;  
}  
