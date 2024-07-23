#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = marks; // ptr=marks and ptr=marks[0] are no different
    for (int i=0; i<4; i++)
    {
        printf("\n Enter the value of %dth student : ", (i+1));
        scanf("%d", ptr);
        ptr++;
    }
    for (int i=0; i<4; i++)
    {
        printf("\n Enter the value of %dth student is : %d", (i+1), marks[i]);
        
    }
    return 0;
}