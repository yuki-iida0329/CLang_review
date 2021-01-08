#include <stdio.h>
#include <ctype.h>

int main(void){
    char n;
    int i;
    
    printf("Input Number(0-255):");
    scanf("%c", &n);
    for(i=0; i<8; i++){
        if((n &= 0x80) == 0){
            printf("0");
        }else{
            printf("1");
        }
        n = n << 2;
    }
    return 0;
}
