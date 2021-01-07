#include<stdio.h>
#include <ctype.h>

int main(void){
    int c;
    
    printf("Input words:");
    while((c = getchar()) != '\n' && c != EOF){
        if(islower(c)){
            c &= 0xDF;
        }
        putchar(c);
    }
    return 0;
}
