#include <stdio.h> 

    int main(){
    float r;
    printf("Enter the radius : \n");
    scanf("%f", &r);
    float v=(4.0/3.0)*3.14*r*r*r;
    printf("%f", v);
return 0;
}