#include <stdio.h> 

    int main(){
    int p,r,y;
    printf("Enter principal, rate and year respectively : \n");
    scanf("%d", &p);
    scanf("%d", &r);
    scanf("%d", &y);
    float si=(p*r*y)/100;
    printf("\n Simple Interest : %f", si);
    return 0;
}