#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main(){
    int num[5];
    int b;
    int i;

    srand((unsigned) time(NULL));
    for(i=0; i < 5; i++){
        num[i] = rand() % 10 + 1;
        b = sqrt(a*a);
        printf("%dつ目の数値:%d 絶対値:%d\n", i+1, a, b);
    }

}