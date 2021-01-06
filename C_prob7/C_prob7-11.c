#include<stdio.h>
#define arrayMAX 100

int main(){
    int num[arrayMAX];
    int i=1;
    int j;

    num[0] = 1;
    num[1] = 1;

    while(num[i] < 40){
        i++;
        num[i] = num[i-1] + num[i-2];        
    }
    for(j=0; j < i; j++){
        printf("%d ", num[j]);
    }
    return 0;
}