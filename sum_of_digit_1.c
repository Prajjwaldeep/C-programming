#include <stdio.h> 
int sum(int num)
{
    int sum=0,r;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    return sum;
}
    int main(){
    int t,a,r,n,s;
    scanf("%d",&t);
    for (a=0; a<t; a++)
    {
        scanf("%d",&n);
        s=sum(n);
        printf("%d\n",s);
        n=0;
    }
return 0;
}