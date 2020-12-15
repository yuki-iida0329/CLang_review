#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[6];
    int n;
    int i;

    srand((unsigned)time(NULL));
    for(i = 0; i <= 5; i++){
        n = rand() % 10 + 1;
        num[i] = n;
        printf("num[%d]=%d", i, n);
        n = 0;
    }
}