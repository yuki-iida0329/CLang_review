#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    int i;
    int n;
    int max_num = 0;
    int min_num = 10;

    srand((unsigned) time(NULL));
    for(i=0; i < 5; i++){
        n = rand() % 10 + 1;
        printf("%d ", n);
        if(max_num <= n){
            max_num = n;
        }
        if(min_num >= n){
            min_num = n;
        }
    }
    printf("\n最大値：%d \n最小値：%d", max_num, min_num);
}