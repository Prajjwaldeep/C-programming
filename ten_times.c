#include <stdio.h>
void ten(int *d)
{
    *d = 10 * (*d);
}
void ten(int *a);
int main()
{
    int n = 5;
    printf("Value before passing : %d", n);
    ten(&n);
    printf("\n Value after passing : %d", n);

    return 0;
}