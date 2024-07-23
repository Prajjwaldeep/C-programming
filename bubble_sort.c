#include <stdio.h> 

    int main(){
    int l,a,b,t;
    printf("Enter the limit of array : \n");
    scanf("%d",&l);
    int arr[l];
    printf("\nEnter array elements : \n");
    for(a=0; a<l; a++)
    {
        scanf("%d", &arr[a]);
    }
    for (a=0; a<l; a++)
        {
            for (b=0; b<(l-1); b++)
            {
                if (arr[b]>arr[b+1])
                {
                    t=arr[b];
                    arr[b]=arr[b+1];
                    arr[b+1]=t;
                }
            }
        }
        printf("\nArray elements after sort : ");
        for(a=0; a<l; a++)
        {
            printf("%d ",arr[a]);
        }
return 0;
}