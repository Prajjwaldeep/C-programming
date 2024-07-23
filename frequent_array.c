#include <stdio.h>
int main()
{
    int Size;
    printf("\n ENTER SIZE OF ARRAY : ");
    scanf("%d",&Size);
    int FreqArr[100000];
    int a,b,max=0,ele=0;
    printf("\n ENTER ELEMENTS OF ARRAY : \n");
    for (a=0; a<Size; a++)
    {
        scanf("%d", &FreqArr[a]);
    }
    for (a=0; a<Size; a++)
    {
        int c=1;
        for (b=(a+1); b<Size; b++)
        {
            if(FreqArr[a]==FreqArr[b])
            {
                c++;
            }
        }
        if (max<c)
        {
            max=c;
            ele=FreqArr[a];
        }
    }
    printf("\n%d", ele);
	return 0;
}