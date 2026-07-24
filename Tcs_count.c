//TCS problem

/*The problem solvers have found a new Island for coding and named it as Philaland. These smart people were given a task to make purchase of items at the Island easier by distributing various coins with different value. Manish has come up with a solution that if we make coins category starting from $1 till the maximum price of item present on Island, then we can purchase any item easily. He added following example to prove his point. 

Lets suppose the maximum price of an item is 5$ then we can make coins of {$1, $2, $3, $4, $5} to purchase any item ranging from $1 till $5. Now Manisha, being a keen observer suggested that we could actually minimize the number of coins required and gave following distribution {$1, $2, $3}. According to him any item can be purchased one time ranging from $1 to $5. Everyone was impressed with both of them.

Your task is to help Manisha come up with minimum number of denominations for any arbitrary max price in Philaland. */                 



#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d", &n);
    while(n != 0){
        n = n/2;
        count = count + 1;
    }
    printf("%d", count);
    return 0;