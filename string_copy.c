#include <stdio.h> 
#include <string.h>

    int main(){
    char str[]="This";
    char str2[23];
    strcpy(str2,str);
    printf("New value of str2 is %s",str2);
return 0;
}