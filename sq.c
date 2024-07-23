#include <stdio.h>
int square(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return (a * a) + square(a - 1);
    }
}
int square(int y);
int main()
{
    int n, o;
    printf("Enter the number : \n");
    scanf("%d", &n);
    o = square(n);
    printf("\n Required output : %d", o);
    return 0;
}