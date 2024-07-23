#include <stdio.h>

int main()
{

    printf("Enter radius of the circle : ");
    int r;
    scanf("%d", &r);
    float a;
    a = 3.14 * r * r;
    printf("\n The area of the circle is : %f", a);
    printf("\n To found volume of another object i.e, cylinder (Radius as taken in previous input). \n ");
    printf("Enter height : ");
    int h;
    scanf("%d", &h);
    float v = 3.14 * r * r * h;
    printf("\n Volume of the cylinder : %f", v);

    return 0;
}