#include<stdio.h>
#define arrayMAX 100

int main(){
    int num[arrayMAX];
    int i=2;
    int j;

    num[0] = 1;
    num[1] = 1;
    num[2] = 2;

    while(num[i] < 30){
        i++;
        num[i] = num[i-1] + num[i-2] + num[i-3];        
    }
    for(j=0; j < i; j++){
        printf("%d ", num[j]);
    }
    return 0;
}