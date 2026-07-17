#include <stdio.h>
#include<string.h>
int main()
{
char arr[50],temp;
scanf("%[^\n]s",arr);
int n=strlen(arr);
int start=0,end=n-1;
while(start<end)
{
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
printf("%s",arr);
}
