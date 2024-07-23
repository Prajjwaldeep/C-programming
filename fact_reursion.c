#include <stdio.h>
int factorial(int x)
{
    if (x != 1)
    {
        return (x * factorial(x - 1));
    }
    else
    {
        return 1;
    }
}
int factorial(int x);

int main()
{
    int n, q;
    printf("Enter the number : ");
    scanf("%d", &n);
    q = factorial(n);
    printf("\n The factorial of %d is %d", n, q);
    return 0;
}