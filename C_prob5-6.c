#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[10];
    int num_max = 0;
    int num_min = 10;
    int n;
    int i = 0;

    srand((unsigned)time(NULL));
    for(i = 0; i <= 9; i++){
        n = rand() % 10 + 1;
        num[i] = n;
    }

    for(i = 0; i <= 9; i++){
        if(num[i] > num_max){
            num_max = num[i];
        }else if(num[i] < num_min){
            num_min = num[i];
        }
    }

    for(i = 0; i <= 9; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    printf("最大値：%d\n",num_max);
    printf("最小値：%d\n", num_min); 
}