#include <stdio.h>
int even(int x)
{
    if ((x % 2 == 0) && (x == 2))
    {
        return 2;
    }
    else if ((x % 2 == 0) && (x >= 2))
    {
        return (x + even(x - 2));
    }
    else if ((x % 2 != 0) && (x >= 2))
    {
        int t = x - 1;
        return (t + even(t - 2));
    }
}
int even(int x);

int main()
{
    int n, q;
    printf("Enter the number : ");
    scanf("%d", &n);
    q = even(n);
    printf("\n The sum of even numbers from 2 to %d is %d", n, q);
    return 0;
}