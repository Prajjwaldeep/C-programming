#include <stdio.h>
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    printf("The value of x and y before swap are %d and %d", x, y);
    wrong_swap(x, y); // Call by value. (This is a calling function)
    printf("\n The value of x and y after passing through wrong_swap are %d and %d", x, y);
    swap(&x, &y); // Call by reference (This is a calling function)
    printf("\n The value of x and y after passing through swap are %d and %d", x, y);
    return 0;
}