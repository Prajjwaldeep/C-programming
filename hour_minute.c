#include <stdio.h>
int main()
{
    int tot_mins, hrs, mins;
    printf("Enter time in minutes : \n");
    scanf("%d", &tot_mins);

    hrs = tot_mins / 60;
    mins = tot_mins % 60;

    printf("\n%d Hours and %d Minutes", hrs, mins);

    return 0;
}