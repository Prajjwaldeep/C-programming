#include <stdio.h> 

    int main(){
    int l,a,p=0,q;
    printf("Enter the limit of the array : ");
    scanf("%d", &l);
    printf("\nEnter the elements of the array : \n");
    int arr[l];
    for(a=0; a<l; a++)
    {
        scanf("%d", &arr[a]);
    }
    int s;
    printf("Enter the elements to be found : ");
    scanf("%d", &s);
    for (a=0; a<l-1; a++)
        {
            if (arr[a]==s)
            p=1;
            q=a;
        }
        if(p==1)
        printf("\nNumber is present in position %d", q);
        else
        printf("\nNumber is not present");
        return 0;
}