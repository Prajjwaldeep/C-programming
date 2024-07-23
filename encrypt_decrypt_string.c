#include <stdio.h> 
#include <string.h>

    int main(){
    char str[100];
    char str1[100];
    printf("Enter the string : ");
    gets(str);
    int len=strlen(str);
    int i;
    char ch,ch1;
    for (i=0; i<len; i++)
    {
        ch=str[i];
        int temp=(int)ch;
        temp=temp+1;
        ch1=(char)temp;
        str1[i]=ch1;
        str1[(len+1)]='\0';

    }
    printf("\n Encrypted string : %s", str1);
    char str2[1000];
    int length,a;
    char ch0,ch10;
    length=strlen(str1);
    for (a=0; a<length; a++)
    {
        ch0=str1[a];
        int t=(int)ch0;
        t=t-1;
        ch10=(char)t;
        str2[a]=ch10;
    }
    printf("\n Decrypted string : %s", str2);
    
return 0;
}