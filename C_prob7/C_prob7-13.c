#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define arrayMax 10

//重複が出る状態

int main(){
    int num_A[arrayMax];
    int num_B[arrayMax];
    int num_com[arrayMax];
    int num_asse[arrayMax];
    int i;
    int j;
    int k=0;
    int l=0;
    int n;

    srand((unsigned) time(NULL));
    for(i=0; i < 10; i++){
        num_A[i] = rand() % 10 + 1;  
    }
    for(i=0; i < 10; i++){
        num_B[i] = rand() % 10 + 1;  
    }
    for(i=0; i < 10; i++){
        for(j=0; j < 10; j++){
            if(num_A[i] == num_B[j]){
                num_com[k] = num_B[j];
                k++;
            }
        }
    }
    for(i=0; i < k; i++){
        for(j=1; j < k; j++){
            if(num_com[i] != num_com[j]){

            }
        }
    }

    for(i=1; i <= 10; i++){
        for(j=0; j < 10; j++){
            if(i == num_A[j] || i == num_B[j] ){
                num_asse[l] = num_B[j];
                l++;
            }
        }
    }


    printf("配列1:");
    for(i=0; i < 10; i++){
        printf("%d ", num_A[i]);
    }
    printf("\n");
    printf("配列2:");
    for(i=0; i < 10; i++){
        printf("%d ", num_B[i]);
    }
    printf("\n");
    printf("共通の数: ");
    for(i=0; i < k; i++){
        printf("%d ", num_com[i] );
    }
    printf("\n");
    printf("どちらか入っている数: ");
    for(i=0; i < l; i++){
        printf("%d ", num_asse[i] );
    }
    printf("\n");
}

