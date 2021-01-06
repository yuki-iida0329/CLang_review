#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define arrayMax 100

int main(){
    int i;
    int j;
    int k = 0;
    int l = 0;
    int num;
    int flag;
    int prime_num[arrayMax];
    int div_num[arrayMax];


    srand((unsigned) time(NULL));
    num = rand() % 1000 + 1;
    printf("%dの約数\n", num);

    for(i=1; i <= num; i++){
        if(num % i == 0 ){
            div_num[l] = i;
            l++;
        }
    }
    
    for(i=0; i < l; i++){
        printf("%d ", div_num[i]);
    }
    printf("\n");
}