#include <stdio.h>

int main(){
    int i;

    for(i=1; i <= 100; i++){
        if(i % 3 == 0 || i /10 % 10 == 3 || i % 10 == 3){
            printf("%d\n", i);
        }
    } 
}