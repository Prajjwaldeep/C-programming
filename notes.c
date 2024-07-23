#include <stdio.h>
int main()
{
    int note500,note100,note50,note20,note10,note2,note1;
    note500=0;
    note100=0;
    note50=0;
    note10=0;
    note2=0;
    note1=0;
    int arr[]={500,100,50,20,10,5,2,1};
    int amount,a,n;
    printf("\n Enter amount : \n");
    scanf("%d", &amount);
    for(a=0; a<8; a++)
    {
        n=amount/arr[a];
        if (n!=0)
        printf("\n %d:%d",arr[a],n);
        amount=amount%arr[a];
    }

	return 0;
}