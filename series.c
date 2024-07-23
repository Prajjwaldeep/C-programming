#include <stdio.h>
#include <math.h>

    int main(){
    int n,x,i,sum=0,m;
    printf("n : ");
    scanf("%d", &n);
    printf("\nx : ");
    scanf("%d", &x);
    printf("Series : ");
    for(i=1; i<=n; i++)
    {
        m=pow(x,i);
        if(i%2==0)
        {
            sum=sum-m;
        }
        else
        {
            sum=sum+m;
        }
        printf("%d ",m);
    }
    printf("\nSum : %d",sum);
return 0;
}