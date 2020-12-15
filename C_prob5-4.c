#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[10];
    int num_up[10];
    int num_down[10];
    int n;
    int i = 0;
    int j = 0;
    int k = 0;

    srand((unsigned)time(NULL));
    for(i = 0; i <= 9; i++){
        n = rand() % 10 + 1;
        num[i] = n;
    }

    for(i = 0; i <= 9; i++){
        if(num[i] >= 5){
            num_up[j] = num[i];
            j++;
        }else if(num[i] < 5){
            num_down[k] = num[i];
            k++;
        }
    }

    for(i = 0; i <= 9; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    printf("5以上の数：");
    for(i=0; i < j; i++){
        printf("%d ", num_up[i]);
    }
    printf("\n");
    printf("5未満の数：");
    for(i=0; i < k; i++){
        printf("%d ", num_down[i]);
    }
    printf("\n");    
}