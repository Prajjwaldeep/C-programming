#include <stdio.h>

int main()
{
    printf("Enter the number : ");
    int n;
    scanf("%d", &n);
    int sum = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("\n Sum of numbers : %d", sum);
    return 0;
}