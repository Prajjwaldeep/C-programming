#include <stdio.h>

int main()
{

    int len, bre, a;
    printf("Enter length : \n");
    scanf("%d", &len);
    printf("Enter breath : \n");
    scanf("%d", &bre);

    a = len * bre;
    printf("The area of the rectangle is %d", a);
    return 0;
}