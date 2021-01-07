#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max 100

int main(){
    int num;
    int i;

    srand((unsigned) time(NULL));
    num = rand() % 99 + 2; 
    printf("%d:", num);

    for(i=2; i < Max; i++){
        while(num % i == 0){
            printf("%d ",i);
            num = num / i;
        }
    }
}
