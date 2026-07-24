#include<stdio.h>
int main()
{
    int V,W;
    scanf("%d %d", &V, &W);
    int tW=((4*V)-W)/2;
    int fW=V-tW;
    printf("tW:%d\nfW:%d", tW, fW);
    return 0;
}