#include <stdio.h> 

    int main(){
    int l1,l2,c,r;
    printf("Enter the limits of column and rows respectively : \n");
    scanf("%d %d", &l1, &l2);
    int arr[l1][l2];
    printf("\nEnter %d element(s) :\n",(l1*l2));
    for (c=0; c<l1; c++)
    {
        for (r=0; r<l2; r++)
        {
            scanf("%d", &arr[c][r]);
        }
    }
    printf("\nElements of the array are :\n");
    for (c=0; c<l1; c++)
    {
        for (r=0; r<l2; r++)
        {
            printf("%d \t", arr[c][r]);
        }
        printf("\n");
    }
return 0;
}