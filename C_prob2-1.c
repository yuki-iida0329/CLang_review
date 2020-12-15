#include <stdio.h>
 
void main(){
    int a;
    int b;                              //  変数a（キーボードからの値を代入)
    printf("a=");                       //  キーボードからの入力を促す
    scanf("%d",&a);                     //  キーボードから一文字入力
    printf("aの値は %d です。\n",a);        //  aの値を表示
    printf("b=");
    scanf("%d",&b);
    printf("bの値は %d です。\n",b);
    printf("a + b = %d \n", a + b);
    printf("a - b = %d \n", a - b);
    printf("a * b = %d \n", a * b);
    printf("a / b = %d \n", a / b);  
    printf("a %% b = %d \n", a % b);
}