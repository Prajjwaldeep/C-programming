#include <stdio.h>

int main()
{
    int l, c, r,s=0;
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
    printf("\n Acctual array : \n");
    for (c = 0; c < l; c++)
    {
        for (r = 0; r < l; r++)
        {
            printf("%d \t", arr[c][r]);
        }
        printf("\n");
    }
    for (c = 0; c < l; c++)
    {
        for (r = 0; r < l; r++)
        {
            if ((c == r) || ((c + r) == (l - 1)))
            {
                s+=arr[c][r];
            }
        }
    }
    printf("\nSum of the diagonal elements in the matrix is : %d", s);
    return 0;
}