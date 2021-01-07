#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main(){
    int a;
    int b;
    int i;

    srand((unsigned) time(NULL));
    for(i=0; i < 4; i++){
        a = rand() % 20 - 9;
        b = sqrt(a*a);
        printf("%dつ目の数値:%d 絶対値:%d\n", i+1, a, b);
    }

}