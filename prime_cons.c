#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    int i, c = 0;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("\n %d is prime", x);
    }
    else
    {
        printf("\n %d is not prime", x);
    }
    return 0;
}