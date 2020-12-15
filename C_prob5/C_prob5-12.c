#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[3][3];
    int n;
    int i = 0;
    int j = 0;

    srand((unsigned)time(NULL));
    for(i = 0; i <= 2; i++){
        for(j = 0;j <= 2; j++ ){
        n = rand() % 9 + 1;
        num[i][j] = n;
        }
    }
    for(i = 0; i <= 2; i++){
        for(j = 0;j <= 2; j++ ){
        printf("%d ",num[i][j]);
        }
        printf("\n");
    }
}