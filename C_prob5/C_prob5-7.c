#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[5];
    int num_sum = 0;
    int num_ave = 0;
    int num_ave_up[5];
    int num_ave_down[5];
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
        num_sum += num[i];
    }
    num_ave = num_sum / 5;
    printf("合計値：%d\n", num_sum);
    printf("平均値：%d\n", num_ave);


    for(i = 0; i <= 4; i++){
        if(num[i] > num_ave){
            num_ave_up[j] = num[i];
            j++;
        }else if(num[i] < num_ave){
            num_ave_down[k] = num[i];
            k++;
        }
    }

    printf("平均値より大きい数：");
    for(i = 0; i < j; i++){
        printf("%d", num_ave_up[i]);
    }
    printf("\n平均値より小さい数：");
     for(i = 0; i < k; i++){
        printf("%d", num_ave_down[i]);
    }
}