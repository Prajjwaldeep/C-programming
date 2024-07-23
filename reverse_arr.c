#include <stdio.h> 

    int main(){
    int l,a;
    printf("Enter the limit of the array : ");
    scanf("%d", &l);
    int arr[l];
    printf("\nEnter the element of the array : \n");
    for (a=0; a<l; a++)
    {
        scanf("%d", &arr[a]);
    }
    printf("\nArray in reverse order : ");
    for (a=(l-1); a>=0; a--)
    {
        printf("%d ",arr[a]);
    }
return 0;
}