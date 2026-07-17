#include <stdio.h>
#include<string.h>
int main()
{
char arr[50],temp;
scanf("%s",arr);
int n=strlen(arr);
int rot,i;
scanf("%d",&rot);
while(rot--)
{
    temp=arr[0];
    for(i=0;i<n-1;i++){
    arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
printf("%s",arr);