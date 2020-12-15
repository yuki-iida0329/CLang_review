#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[5];
    int num_0to60[5];
    int num_60to80[5];
    int num_80over[5];
    int n;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    srand((unsigned)time(NULL));
    for(i = 0; i <= 4; i++){
        n = rand() % 100 + 1;
        num[i] = n;
    }
    for(i = 0; i <= 9; i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    for(i = 0; i <= 4; i++){
        if(num[i] >= 0 && num[i] < 60){
            num_0to60[j] = num[i];
            j++;
        }else if(num[i] >= 60 && num[i] < 80){
            num_60to80[k] = num[i];
            k++;
        }else if(num[i] >= 80){
            num_80over[l] = num[i];
            l++;
        }
    }

    printf("0以上60未満：");
    for(i = 0; i < j; i++){
        printf("%d ",  num_0to60[i]);
    }
    printf("\n60以上80未満：");
     for(i = 0; i < k; i++){
        printf("%d ",  num_60to80[i]);
    }
    printf("\n80以上：");
     for(i = 0; i < l; i++){
        printf("%d ",  num_80over[i]);
    }
}