#include <stdio.h> 

    int main(){
    int r;
    printf("Enter your rating : \n");
    scanf("%d", &r);
    switch(r)
    {
        case 1:
        {
            printf("Your rating is 1");
        }
        break;
        case 2:
        {
            printf("Your rating is 2");
        }
        break;
        case 3:
        {
            printf("Your rating is 3");
        }
        break;
        case 4:
        {
            printf("Your rating is 4");
        }
        break;
        case 5:
        {
            printf("Your rating is 5");
        }
        break;
        default :
        printf("Invalid rating !");
        break;

    }
return 0;
}