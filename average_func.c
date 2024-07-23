#include <stdio.h>

void average(int x, int y)
{
    float z = ((float)x + (float)y) / 2;
    printf("\n The average of %d and %d is %f.", x, y, z);
}
void average(int x, int y);
int main()
{
    int n, n1;
    printf("Enter 2 numbers : \n");
    scanf("%d %d", &n, &n1);
    average(n, n1);
    return 0;
}