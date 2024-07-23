#include <stdio.h>
void asc_sort(int a[100],int n)
{
    int i,j,t;
    for(i=0; i<n; i++)
    {
        for (j=0; j<(n-1); j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int l,a,arr[100];
    printf("Enter the limit of array : ");
    scanf("%d",&l);
    printf("\nEnter the elements of array : \n");
    for (a=0; a<l; a++)
    {
        scanf("%d",&arr[a]);
    }
    printf("\n Required output :\n");
     asc_sort(arr,l);


	return 0;
}