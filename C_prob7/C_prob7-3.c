#include<stdio.h>

int main(){
    int i;
    int num;
    int x = 1;

    printf("自然数を入力してください->");
    scanf("%d",&num);

    for(i=1;i <= num; i++){
        x = x * i;
    }
    printf("%dの階乗は%dです。\n", num, x);
}
