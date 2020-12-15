#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[10];
    int num_tri[10];
    int num_nontri[10];
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
        if(num[i] % 3 == 0){
            num_tri[j] = num[i];
            j++;
        }else if(num[i] % 3 != 0){
            num_nontri[k] = num[i];
            k++;
        }
    }

    for(i = 0; i <= 9; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    printf("3の倍数：");
    for(i=0; i < j; i++){
        printf("%d ", num_tri[i]);
    }
    printf("\n");
    printf("3の倍数以外の数：");
    for(i=0; i < k; i++){
        printf("%d ", num_nontri[i]);
    }
    printf("\n");    
}