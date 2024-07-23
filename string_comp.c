#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    printf("Enter string 1 : ");
    char str2[100];
    scanf("%s", str1);
    int i = 0;
    printf("\nEnter next string : ");
    char c = scanf("%c", &c);
    while (c != '\n')
    {
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i] = '\0';

    if (strcmp(str1, str2) == 0)
    {
        printf("\nBoth are same strings");
    }
    else
    {
        printf("\nBoth are not same strings");
    }
    return 0;
}