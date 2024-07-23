#include <stdio.h>
#include <math.h>
int isPerfectSquare(long long x)
{
    return ((5*x*x)+4);
}
int ps(long long x)
{
    return ((5*x*x)-4);
}
int main()
{
    long long n;
    printf("Enter to check if fibonacci :\n");
    scanf("%lld", &n);
    long temp=sqrt(isPerfectSquare(n));long temp1=sqrt(ps(n));
    if((temp*temp)==isPerfectSquare(n) || (temp1*temp1)==ps(n))
    printf("\nYES");
    else
    printf("\nNO");
	return 0;
}