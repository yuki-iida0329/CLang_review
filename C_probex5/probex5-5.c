#include <stdio.h>
#include <string.h>
 
void main(){
    int i;
    char a[10];
    char b[10];
    int n;


    printf("文字列1：");
    scanf("%s",a);

    printf("文字列2：");
    scanf("%s",b);

    n = strcmp(a,b);
    if(n==0){
        printf("同じものです");

    }else{
        printf("異なるものです");
    }
}