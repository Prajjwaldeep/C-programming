#include <stdio.h>

int main()
{
    int n=3;
    int arr[n][n], b,a;

    printf("Enter the values of matrix \n");
    for (a = 0; a < n; a++)
    {
        for (b = 0; b < n; b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }

    int sum=0;

    for (a = 0; a < n; a++)
    {
        for (b = 0; b < n; b++)
        {
            sum=sum+arr[a][b];
            if(a%3==0)
            {
                printf("%d\n", sum);
            }
        }
    }


    return 0;
}