#include <stdio.h>
int main()
{
    float num1, num2;
    double resnum1, resnum2;
    printf("Enter float value : ");
    scanf("%f %f", &num1, &num2);
    resnum1 = (double)num1;
    resnum2 = (double)num2;

    printf("\n%lf %lf", resnum1, resnum2);

    return 0;
}