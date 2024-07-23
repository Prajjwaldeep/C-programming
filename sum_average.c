#include <stdio.h>
void sumAndavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
void sumAndavg(int a, int y, int *sum, float *avg);
int main()
{
    int i = 3, j = 6, sum;
    float avg;
    sumAndavg(i, j, &sum, &avg);
    printf("\n The value of sum is %d", sum);
    printf("\n The value of average is %f", avg);
    return 0;
}