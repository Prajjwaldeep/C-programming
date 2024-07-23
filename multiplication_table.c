#include <stdio.h> 

    int main(){
    int n,x,temp=1,y,t=1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (x=1; x<=12; x++)
    {
        temp=n*x;
        printf("\n The value of %d multipled with %d results in %d", n, x, temp);
        temp=1;
    }
    printf("\n Multiplication table in reverse \n");
return 0;
}