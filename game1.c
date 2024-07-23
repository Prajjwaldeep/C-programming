#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, ng = 1, n;
    srand(time(0));
    number = rand() % 100 + 1; // Generate random number(s) between 1 and 100
    // Keep iterating until number is gussed
    while (n != number)
    {
        printf("\n Enter a number betwenh 1 and 100 : ");
        scanf("%d", &n);
        if (n > number)
        {
            printf("\n Lower number please !");
            ng++;
        }
        else if (n < number)
        {
            printf("\n Higher number please !");
            ng++;
        }
        else
        {
            printf("p, ng);
        }
    }

    return 0;
}