#include <stdio.h> 

    int main(){
    int l,a;
    printf("Enter the limit of the array : ");
    scanf("%d", &l);
    int arr[l];
    for(a=0; a<l; a++)
    {
        scanf("%d", &arr[a]);
    }
    int p=l;
    for (a=p; a<l; a++)
        arr[a-1]=arr[a];
        l--;
        printf("\nArray elements after deletation are : ");
        for (a=0; a<l; a++)
        {
            printf("%d ",arr[a]);
        }
        int l1=(l-1),mid,mid1;
        if(l1%2==0)
        {
            mid=l1/2;
            printf("\nMiddle element : %d", arr[mid]);
        }
        else
        {
            mid=l1/2;
            mid1=mid+1;
            printf("\nMiddle left element : %d", arr[mid]);
            printf("\nMiddle right element : %d", arr[mid1]);
        }
return 0;
}