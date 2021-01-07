#include<stdio.h>
#include <ctype.h>

int main(void){
    int c;
    
    printf("Input words:");
    while((c = getchar()) != '\n' && c != EOF){
        if(isupper(c)){
            c |= 0x20;
        }
        putchar(c);
    }
    return 0;
}



