#include <stdio.h> 

    int main(){
    int a,s,sum=0,avg;
    printf("Enter marks of 5 subjects : \n");
    for (a=1; a<=5; a++)
    {
        scanf("%d", &s);
        sum=sum+s;
        s=0;
    }
    avg=sum/5;
    printf("\n Average : %d", avg);
    if (avg>=90)
    {
        printf("\n O grade");
    }
    else if (avg<=90 && avg>=80)
    {
        printf("\n A+ grade");
    }
    else if (avg<=80 && avg>=70)
    {
        printf("\n A grade");
    }
    else if (avg<=70 && avg>=60)
    {
        printf("\n B grade");
    }
    else if (avg<=60 && avg>=50)
    {
        printf("\n C grade");
    }
    else
    {
        printf("\n F grade");
    }
return 0;
}