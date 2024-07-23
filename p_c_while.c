#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    int i = 1, c = 0;
    while (i <= x)
    {
        if (x % i == 0)
        {
            c++;
        }
        i++;
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