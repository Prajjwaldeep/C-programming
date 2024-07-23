#include <stdio.h> 
void pairs(int arr[], int n)
{
    int a,b,t;
    for (a=0; a<n; a++)
    {
        for (b=0; b<(n-1); b++)
        {
            if (arr[b]>arr[b+1])
                {
                    t=arr[b];
                    arr[b]=arr[b+1];
                    arr[b+1]=t;
                }
        }
    }
    int res=0;
    int i=0;
    while (i<n)
        {
            int number=arr[i];
            int count=1;
            i++;
            while (i<n && arr[i]==number)
            {
                count++;
                i++;
            }
            if (count>=2)
            {
                res=res+count/2;
            }
        }
        printf("\nNumber of pairs : %d", res);
}
void pairs(int arr[], int n);
    int main(){
    int n,a;
    printf("Enter the limit of array : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements : \n");
    for (a=0; a<n; a++)
    {
        scanf("%d", &arr[a]);
    }
    pairs(arr,n);
    return 0;
}