#include<stdio.h>

void main()
{
    int a;
    printf("整数値入力：");
    scanf("%d", &a);
    if(a <= 10 || a >= 90){
        printf("10以下か90以上の値です。\n");
    }
}