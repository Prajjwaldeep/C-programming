#include <stdio.h> 

    int main(){
        int l1,l2,a,b,t;
        printf("Enter the limit of first array : ");
        scanf("%d", &l1);
        printf("\nEnter the limit of second array : ");
        scanf("%d", &l2);
        int arr1[l1],arr2[l2], arr3[(l1+l2)];
        printf("Enter elements of the first array : \n");
        for (a=0; a<l1; a++)
        {
            scanf("%d", &arr1[a]);
        }
        printf("Enter elements of the second array : \n");
        for (b=0; b<l2; b++)
        {
            scanf("%d", &arr2[b]);
        }
        for (a=0; a<l1; a++)
        {
            arr3[a]=arr1[a];
        }
        for (a=0; a<l2; a++)
        {
            arr3[a+l1]=arr2[a];
        }
        for (a=0; a<(l1+l2); a++)
        {
            for (b=0; b<(l1+l2)-1; b++)
            {
                if (arr3[b]>arr3[b+1])
                {
                    t=arr3[b];
                    arr3[b]=arr3[b+1];
                    arr3[b+1]=t;
                }
            }
        }
        printf("\nMerged array : \n");
        for (a=0; a<(l1+l2); a++)
        {
            printf("\n%d ", arr3[a]);
        }
return 0;
}