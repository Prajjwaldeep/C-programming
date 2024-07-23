#include <stdio.h>

int main()
{
    int a;
    a = 87;
    int *ad = &a;
    printf("The adress of the variable 'a' is %u \n", ad);
    printf("The value of the variable 'a' is %d", *ad);
    return 0;
}