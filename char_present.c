#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter the string : ");
    char str[100];
    gets(str);
    printf("\nEnter the character to be found : ");
    char ch;
    scanf("%c", &ch);
    int a, l, c = 0;
    l = strlen(str);
    for (a = 0; a < l; a++)
    {
        if (ch == str[a])
        {
            c++;
        }
    }
    if (c > 0)
    {
        printf("\n%c is present in string %s", ch, str);
    }
    else
    {
        printf("\n%c is not present in string %s", ch, str);
    }
    return 0;
}