#include <stdio.h>
int prime(int x)
{
    int a, sum = 0;
    for (a = 1; a <= x; a++)
    {
        if (x % a == 0)
        {
            sum = sum + 1;
        }
    }
    if (sum == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int palin(int num)
{
    int n = num;
    int rnum = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rnum = rnum * 10 + rem;
        num = num / 10;
    }
    if (n == rnum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int prime(int u);
int palin(int y);

int main()
{
    int l1, l2, f = 0;
    printf("Enter the limits : \n");
    scanf("%d", &l1);
    scanf("%d", &l2);
    if (l2 <= l1)
    {
        printf("Invalid length");
    }
    else
    {
        printf("Prime palindrome number(s) between %d and %d are as follows : \n", l1, l2);
        int yz;
        for (yz = l1; yz <= l2; yz++)
        {
            if ((prime(yz) == 1) && (palin(yz) == 1))
            {
                printf("%d \t", yz);
                f++;
            }
        }
        printf("\n Frequency of prime-palindrome integers : %d \n", f);
    }

    return 0;
}