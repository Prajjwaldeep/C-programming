#include <stdio.h>

int main()
{
    int l, c, r;
    printf("Enter limit of the square matrix : ");
    scanf("%d", &l);
    int arr[l][l];
    printf("\nEnter the elements of array :\n");
    for (c = 0; c < l; c++)
    {
        for (r = 0; r < l; r++)
        {
            scanf("%d", &arr[c][r]);
        }
    }
    for (c = 0; c < l; c++)
    {
        for (r = 0; r < l; r++)
        {
            if ((c == r) || ((c + r) == (l - 1)))
            {
                printf("%d ", arr[c][r]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}