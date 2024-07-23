#include <stdio.h>

int main()
{
    float c;
    printf("Enter celcius value : ");
    scanf("%f", &c);
    float fa;
    fa = (c * 9 / 5) + 32;
    printf("\n Temperature in farenheit : %f", fa);
    return 0;
}