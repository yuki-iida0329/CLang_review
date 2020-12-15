#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[5];
    char mark[5][10];
    int n;
    int i = 0;
    int j = 0;
    int k = 0;

    srand((unsigned)time(NULL));
    for(i = 0; i <= 4; i++){
        n = rand() % 10 + 1;
        num[i] = n;
    }
    for(i = 0; i <= 4; i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    for(i = 0; i <= 4; i++){
        for(j = 0;j < num[i]; j++){
            mark[i][j] = '*';
        }   
    }

    for(i = 0; i <= 4; i++){
        for(j = 0;j < num[i]; j++){
            printf("%c", mark[i][j]);
        }
        printf("\n");
    }
}