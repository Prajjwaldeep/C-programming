#include <stdio.h> 

    int main(){
    int arr[30];
    int a;
    for (a=0; a<10; a++)
    {
        arr[a]=1;
        arr[a]=arr[a]*2*(a+1);
    }
    printf("\nTable of 2 :\n");
    for (a=0; a<10; a++)
    {
        printf("\n 2 X %d gives %d",(a+1),arr[a]);
    }
    for (a=0; a<10; a++)
    {
        arr[a]=1;
        arr[a]=arr[a]*7*(a+1);
    }
    printf("\n\nTable of 7 :\n");
    for (a=0; a<10; a++)
    {
        printf("\n 7 X %d gives %d",(a+1),arr[a]);
    }
    for (a=0; a<10; a++)
    {
        arr[a]=1;
        arr[a]=arr[a]*9*(a+1);
    }
    printf("\n\nTable of 9 :\n");
    for (a=0; a<10; a++)
    {
        printf("\n 9 X %d gives %d",(a+1),arr[a]);
    }
    
return 0;
}