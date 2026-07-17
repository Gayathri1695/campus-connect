#include <stdio.h>
#include<string.h>
int main()
{
char arr[50],temp;
scanf("%s",arr);
int n=strlen(arr);
int rot,i;
scanf("%s",&rot);
while(rot--)
{
    temp=arr[n-1];
    for(i=n-1;i>=0;i--){
    arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
printf("%s",arr);