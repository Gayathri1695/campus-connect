#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int a=15,*b,**c;
    b=&a;
    c=&b;
    printf("A value :%d\n",a);
    printf("A add :%d\n",&a);
    printf("A add:%d\n",b);
    printf("B add:%d\n",&b);
    printf("A value:%d\n",*b);
    printf("B add:%d\n",c);
    printf("A add:%d\n",*c);
    printf("A value:%d\n",**c);
    return 0;
}
    