#include <stdio.h> 

    int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    int temp=(int)ch;
    if (temp>=65 && temp<=90)
    {
        printf("Uppercase character");
    }
    else if (temp>=97 && temp<=122)
    {
        printf("Lowercase character");
    }
    else
    {
        printf("Special character");
    }
return 0;
}