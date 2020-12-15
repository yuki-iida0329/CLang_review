#include<stdio.h>

void main()
{
    int a;
    printf("整数値入力：");
    scanf("%d", &a);
    if(a < 50){
        printf("50未満です。\n");
    }
}