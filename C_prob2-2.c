#include<stdio.h>

void main()
{
    int a;
    int b;

    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("長方形の幅：%d\n",a);
    printf("長方形の高さ：%d\n", b);
    printf("長方形の面積は、%dです。\n",a * b);


}