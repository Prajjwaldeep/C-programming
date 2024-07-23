#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    int marks[n], q, b;

    printf("Enter the value of %d student(s) respectively : \n", n);
    for (b = 0; b < n; b++)
    {
        scanf("%d", &marks[b]);
    }

    for (q = 0; q < n; q++)
    {
        printf("Marks of student %d : %d \n", (q + 1), marks[q]);
    }

    return 0;
}