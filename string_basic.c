#include <stdio.h> 

    int main(){
    //char str[]={'P','R','A','J','J','W','A','L','D','E','E','P',' ','G','H','O','S','H','\0'};
    char str[]="PRAJJWALDEEP GHOSH";
    char *ptr=str;
    while(*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
return 0;
}