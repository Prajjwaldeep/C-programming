#include <stdio.h>

int main()
{
    char i = '4';
    char *ptr = &i;
    float b = 89.77;
    float *ptr11 = &b;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    printf("The value of ptr11 is %u\n", ptr11);
    ptr11++;
    printf("The value of ptr11 is %u\n", ptr11);
    return 0;
}