#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num[10];
    int odd_num[10];
    int even_num[10];
    int i;
    int j=0;
    int k=0;

    srand((unsigned) time(NULL));
    
    for(i=0; i < 10; i++){
        num[i] = rand() % 100 + 1;

        if(num[i] % 2 == 0){
            even_num[j] = num[i];
            j++;
        }else if(num[i] % 2 != 0){
            odd_num[k] = num[i];
            k++;
        }
    }

    for(i=0; i < 10; i++){
        printf("%d　", num[i]);
    }
    printf("\n");
    printf("偶数：");
    for(i=0; i < j; i++){
        printf("%d ",even_num[i]);
    }
    printf("\n奇数：");
    for(i=0; i < k; i++){
        printf("%d ", odd_num[i]);
    }
}
