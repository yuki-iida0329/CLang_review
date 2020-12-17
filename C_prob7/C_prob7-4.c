#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;

    srand((unsigned) time(NULL));
    
    n = rand() % 1000 + 1;
    if(n >= 1000){
        printf("%dは4桁です。\n", n);
    }else if(n < 1000 && n >= 100){
        printf("%dは3桁です。\n", n);
    }else if(n < 100 && n >= 10){
        printf("%dは2桁です。\n", n);
    }else if(n < 10 && n >= 1){
        printf("%dは1桁です。\n", n);
    }

}