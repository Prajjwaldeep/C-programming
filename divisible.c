#include <stdio.h> 

    int main(){
    int n,x;
    printf("Enter the number (For divisible 0 will return) : ");
    scanf("%d",&n);
    x= (n%97);
    printf("\n Will return : %d",x);

return 0;
}