#include <stdio.h> 

    int main(){
    int n,k,a,b,t;
    printf("Enter the limit of array : ");
    scanf("%d",&n); // Accepting the size of the input
    int arr[n];
    printf("\nEnter the elements of array : ");
    for(a=0; a<n; a++)
    {   // Accepting the elements in array
        scanf("%d", &arr[a]);
    }
    printf("\nEnter the value of K : ");
    scanf("%d", &k);
    for (a=0; a<n; a++)
        {
            for (b=0; b<(n-1); b++)
            {
                if (arr[b]>arr[b+1])
                {
                    // Sorting the array using bubble sort technique
                    t=arr[b];
                    arr[b]=arr[b+1];
                    arr[b+1]=t; // Swapping the values
                }
            }
        }
        // Printing the K-th smallest element
        printf("%dth smallest element in the given array : %d",k, arr[k-1]);
return 0;
}