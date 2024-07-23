#include <stdio.h> 

    int main(){
    int arr[30];
    int a,t;
    printf("Whose table do you want : ");
    scanf("%d", &t);
    for (a=0; a<10; a++)
    {
        arr[a]=1;
        arr[a]=arr[a]*t*(a+1);
    }
    printf("\nTable of %d :\n",t);
    for (a=0; a<10; a++)
    {
        printf("\n %d X %d gives %d",t,(a+1),arr[a]);
    }
    
return 0;
}