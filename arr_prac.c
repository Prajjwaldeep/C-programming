#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    printf("Value in ptr is : %d \n",(*ptr));
    ptr = ptr + 2;
    printf("\nValue in ptr+2 is : %d \n",(*ptr));
    if (ptr == &arr[2])
    {
        printf("Thse point to the same location in memory");
    }
    else
    {
        printf("Thse do not point to the same location in memory");
    }
    return 0;
}