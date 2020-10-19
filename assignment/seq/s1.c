#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],c[10][10],row,col,i,j,k;    
system("cls");  
printf("Enter the number of rows=");    
scanf("%d",&row);    
printf("Enter the number of columns=");    
scanf("%d",&col);    
printf("Enter matrix A =\n");    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("Enter matrix B =\n");    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("Resultant matrix=\n");    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
c[i][j]=0;    
for(k=0;k<col;k++)    
{    
c[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
printf("%d\t",c[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
