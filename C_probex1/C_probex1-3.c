#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    int a[5];
    int i=0;
    int j=0;
    int k=0;
    int l=0;

    srand((unsigned) time(NULL));
    for(i=0; i < 5; i++){
        a[i] = rand() % 100 + 1;
        printf("%d ", a[i]);
    }
    for(i=0; i < 5;i++){
        if(a[i] >= 20  && a[i] <= 50){
            j++;
        }else if(a[i] > 80){
            k++;
        }else if(a[i] >= 0 && a[i] < 10){
            l++;
        }
    }
    printf("\n20以上50以下の数：%d個\n80より大きい数：%d個\n0以上10未満の数：%d個", j,k,l);
}