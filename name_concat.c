#include <stdio.h>
#include <string.h>

int main()
{
    char first[100];
    char last[110];
    printf("Enter first name : ");
    gets(first);
    printf("\nEnter last name : ");
    gets(last);
    strcat(first, last);
    printf("\nFull name : %s", first); // SORRY NO SPACE (" ")
    return 0;
}