#include <stdio.h>
int sum(int x, int y)
{
    int z = x + y;
    return z;
}
int sum(int a, int b);
int main()
{
    int a, b,t;
    printf("Enter two values : \n");
    scanf("%d %d", &a, &b);
    t=sum(a, b);
    printf("\n The value of sum is %d", t);
    return 0;
}