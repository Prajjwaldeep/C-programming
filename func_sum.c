#include <stdio.h>
void sum(int a, int b)
{
    int c = a + b;
    printf("\n SUM : %d", c);
}
void sum();
int main()
{
    int n, m;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &m, &n);
    sum(m, n);
    return 0;
}
