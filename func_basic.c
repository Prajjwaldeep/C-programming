#include <stdio.h>
void display()
{
    printf("This is display \n");
}
void display(); // Fuction prototype

int main()
{
    int a;
    printf("This is initilizing display. \n");
    display(); // Fuction call
    printf("Display function finished it's work. \n");
    return 0;
}
