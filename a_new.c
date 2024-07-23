#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int arr[n], b;

    printf("Enter the value of %d elements respectively : \n", n);
    for (b = 0; b < n; b++)
    {
        scanf("%d", &arr[b]);
    }

    printf("Odd position elements : \n");
    for (b = 1; b < n; b = b + 2)
    {
        printf("%d ", arr[b]);
    }

    return 0;
}