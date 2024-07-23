#include <stdio.h>
void printAdd(int f)
{
    printf("The value of variable 'f' is %u \n ", *(&f)); // Value 1
    printf("The adress of variable 'f' is %u \n ", &f);   // Adress 1
}
int main()
{
    int i;
    i = 4;
    printf("The value of the variable 'i' is %d \n", i); // Value 2
    printAdd(i);
    printf("The adress of the variable 'i' is %u \n", &i); // Adress 2
    return 0;
    // Adess 1 and 2 are not the same.
    // Value 1 and 2 are same.
}