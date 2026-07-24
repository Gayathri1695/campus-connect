#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n][n],*a;
    for (i=0;i<n;i++)
    for (j=0;j<n;j++)
    scanf("%d",&arr[i][j]);
    a=&arr[0][0];
    for (i=0;i<n;i++,printf("\n"))
    for (j=0;j<n;j++)
    printf("%d ",*((a)+(i*n)+j));
    
    
}