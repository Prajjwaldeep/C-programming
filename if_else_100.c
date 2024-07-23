#include <stdio.h> 

    int main(){
    int a,sum=0;
    for (a=1; a<=10; a++)
    {
        if (a%2==0)
        {
            sum++;
        }
    }
    printf("\n Even numbers : %d", sum);
return 0;
}