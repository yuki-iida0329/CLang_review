#include<stdio.h>
#define arrayMax 100


int main(){
    int i;
    int j=0;
    int k=0;
    int num[arrayMax];
    int prime_num[arrayMax];

    for(i=0; i < arrayMax; i++){
        num[i] = i+2;
    }
    
    for(j=2; j < arrayMax; j++){
        for(i=0; i < arrayMax; i++){
            if(num[i] != j && num[i] %j == 0){
                num[i] = 0;
            }
        }
    }

    for(i=0; i < arrayMax; i++){
        if(num[i] != 0){
            num[k] = num[i];
            k++;
        }
    }
    for(i=0; i < k; i++){
        printf("%d ",num[i]);
    }

}