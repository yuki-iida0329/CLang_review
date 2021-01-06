#include<stdio.h>
#define arrayMax 100

int main(){
    int i;
    int j;
    int k;
    int l = 0;
    int sum = 0;
    int div_sum[arrayMax];

    for(i=1; i <= 10000; i++){
        for(j=1; j <= i; j++){
            if(i % j == 0){
                div_sum[l] += j;
            }    
        }
        printf("%d\n", div_sum[l]);
        l++;   
    }
    
    for(l=0; l < 10000; l++){
        if(l == div_sum[l] - 1){
            printf("%d\n", l);
        }
    }
    
}