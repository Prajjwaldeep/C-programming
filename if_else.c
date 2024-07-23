#include <stdio.h>

int main()
{
    int n1;
    printf("Enter a number : ");
    scanf("%d", &n1);
    if (n1 % 2 == 0)
    {
        printf("\n Even : %d", n1);
    }
    else
    {
        printf("\n Odd : %d", n1);
    }
    return 0;
}