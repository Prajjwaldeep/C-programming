#include <stdio.h>

int main()
{
    int a,b, sum;
    float c,d, sum1, mul1, mul2, mul3, div, div2;

    printf("Enter the first integer value : \n");
    scanf(" %d",&a);
    printf("Enter the second integer value : \n");
    scanf(" %d",&b);
    printf("Enter the first float value : \n");
    scanf("%f",&c);
    printf("Enter the second float value : \n");
    scanf("%f",&d);

    sum = a + b;
    sum1 = c + d + b;
    mul1 = a * d;
    mul2 = c * d;
    mul3 = a * b * c * d;
    div = a / b;
    div2 = d / c;

    printf("First sum value %d \n", sum);
    printf("Second sum value %f \n", sum1);
    printf("First multiplication value %f \n", mul1);
    printf("Second multiplication value %f \n", mul2);
    printf("Third multiplication value %f \n", mul3);
    printf("First division value %f \n", div);
    printf("Second division value %f \n", div2);

    return 0;
}