#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter the code, salary and name of first employee : \n");
    scanf("%d", &e1.code);
    scanf("%f", &e1.salary);
    scanf("%s", e1.name);

    printf(" Enter the code, salary and name of second employee : \n");
    scanf("%d", &e2.code);
    scanf("%f", &e2.salary);
    scanf("%s", e2.name);

    printf(" Enter the code, salary and name of third employee : \n");
    scanf("%d", &e3.code);
    scanf("%f", &e3.salary);
    scanf("%s", e3.name);

    printf("Code of first employee : %d \n", e1.code);
    printf("Salary of first employee : %0.3f \n", e1.salary);
    printf("\n Name of first employee : %s \n", e1.name);
    printf("Code of first employee : %d \n", e2.code);
    printf("Salary of first employee : %0.3f \n", e2.salary);
    printf("\n Name of first employee : %s \n", e2.name);
    printf("Code of first employee : %d \n", e3.code);
    printf("Salary of first employee : %0.3f \n", e3.salary);
    printf("Name of first employee : %s ", e3.name);

    return 0;
}