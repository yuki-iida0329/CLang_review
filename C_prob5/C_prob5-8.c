#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num[5];
    int num_minus = 0;
    int num_pluse = 0;
    int num_zero = 0;
    int n;
    int i = 0;

    srand((unsigned)time(NULL));
    for(i = 0; i <= 4; i++){
        n = rand() % 20 + 1;
        n = n - 10;
        num[i] = n;
    }

    for(i = 0; i <= 4; i++){
        if(num[i] > 0){
            num_pluse++;
        }else if(num[i] < 0){
            num_minus++;
        }else if (num[i] == 0){
            num_zero++;
        }
    }

    for(i = 0; i <= 4; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    printf("0より大きい数：%d個\n",num_pluse);
    printf("0より小さい数：%d個\n", num_minus); 
    printf("0の個数：%d個\n", num_zero);
}