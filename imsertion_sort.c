#include <stdio.h> 

    int main(){
    int l,i,j;
    printf("Enter the limit of array : \n");
    scanf("%d",&l);
    int arr[l];
    printf("\nEnter array elements : \n");
    for(i=0; i<l; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=1; i<l; i++)
        {
            int current=arr[i];
            int j=i-1;
            while(arr[j]>current && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current;
        }

    printf("\nArray elements after sort : ");
        for(i=0; i<l; i++)
        {
            printf("%d ",arr[i]);
        }
return 0;
}