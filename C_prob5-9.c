#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[10];
    int num_50_over[10];
    int num_50_less[10];
    int n;
    int i = 0;
    int j = 0;
    int k = 0;

    srand((unsigned)time(NULL));
    for(i = 0; i <= 9; i++){
        n = rand() % 100 + 1;
        num[i] = n;
    }
    for(i = 0; i <= 9; i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    for(i = 0; i <= 9; i++){
        if(num[i] >= 50){
            num_50_over[j] = num[i];
            j++;
        }else if(num[i] < 50){
            num_50_less[k] = num[i];
            k++;
        }
    }

    printf("50以上の数：");
    for(i = 0; i < j; i++){
        printf("%d ", num_50_over[i]);
    }

    printf("\n50未満の数：");
     for(i = 0; i < k; i++){
        printf("%d ", num_50_less[i]);
    }
}