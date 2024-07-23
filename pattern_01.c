#include <stdio.h> 

    int main(){
    int n,c;
    int rows;
    scanf("%d",&n);
    for (c=1; c<=n; c++)
    {
        for (rows=1; rows<=c; rows++)
        {
            if(rows==1 || rows==c || c==n)
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }
return 0;
}