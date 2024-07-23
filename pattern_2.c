// 1
// 21
// 321
// 4321
// 54321

#include <stdio.h> 

    int main(){
    int c,r;
    for (c=1; c<=5; c++)
    {
        for (r=c; r>=1; r--)
        {
            printf("%d",r);
        }
        printf("\n");
    }
return 0;
}