#include <stdio.h>

int add(int a, int b)
{
    // Base condition
    if (b == 0)
        return a;

    // Recursive call
    return add(a + 1, b - 1);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d", add(num1, num2));

    return 0;
}