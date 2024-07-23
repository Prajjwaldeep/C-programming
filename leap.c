#include <stdio.h> 

    int main(){
    int y;
    printf("Enter year : ");
    scanf("%d", &y);
    if (y%4==0)
    {
        printf("\n %d is a leap year.", y);
    }
    else
    {
        printf("\n %d is not a leap year.", y);
    }
return 0;
}