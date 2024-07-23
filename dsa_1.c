#include <stdio.h> 

    int main(){
    int n,a;
    printf("Enter the limit of array : ");
    scanf("%d",&n); // Accepting the size of the input
    int arr[n];
    printf("\nEnter the elements of array : ");
    for(a=0; a<n; a++)
    {   // Accepting the elements in array
        scanf("%d", &arr[a]);
    }
    int min=arr[0], max=arr[0];
    for(a=0; a<n; a++)
    {
        // Comparing to obtain the maximum and minimum value from the user
        if(arr[a]>max)
        {
            max=arr[a];
        }
        if(arr[a]<min)
        {
            min=arr[a];
        }
    }
    // Printing the maximum and minimum value obtained
    printf("\nLargest element in the array is %d and smallest element is %d",max,min);
return 0;
}