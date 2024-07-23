#include <stdio.h>

int main()
{
    int n;
    printf("Enter square dimension : ");
    scanf("%d", &n);
    int r = n * (n + 1) * ((2 * n) + 1) / 6;
    printf("\n Number of boxes to fit within %d unit(s) X %d unit(s) are %d", n, n, r);
    return 0;
}