#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter your string : ");
    gets(str);
    printf("\nThe string entered : ");
    puts(str);
    int a = strlen(str);
    printf("\nThe length is %d", a);
    return 0;
}