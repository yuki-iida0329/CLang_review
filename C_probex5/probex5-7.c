#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  
void main(){
    char[] numString = "100";   //  数値の文字列
    int num;    //  numStringの数値を入れる変数
    
    //numStringを整数値に変換し、numに代入
    num = atoi(numString);
    
    printf("%d\n",num);
}