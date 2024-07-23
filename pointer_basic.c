#include <stdio.h>

int main()
{
    int i = 69;
    int *j = &i;  // 'j' will now store the adress of 'i'
    int **k = &j; // 'j' will now store the adress of 'i'

    printf("\t The value of i is  : \t %d \n ", i);
    printf("\t The value of i is  : \t %d \n ", *j);
    printf("\t The adress of i is : \t %u \n ", &i);
    printf("\t The adress of i is : \t %u \n ", j);
    printf("\t The adress of j is : \t %u \n ", &j);
    printf("\t The value of j is  : \t %d \n ", *(&j));
    printf("\n\n The value of j is %d", j);
    printf("\n The adress of j is %d", &j);
    printf("\n The value of j is %d", *k);
    printf("\n The adress of j is %u", k);
    return 0;
}