#include <stdio.h>
#include <string.h>
 
void main(){
    int i;
    char s[10];
    int len;
    char a[3];
    char b[3];

    printf("文字列1：");
    scanf("%s",a);
    for(i=0;i<3;i++){
        s[i] = a[i];
    }

    printf("文字列2：");
    scanf("%s",b);
    for(i=3;i<6;i++){
        s[i] = b[i-3];
    }

    printf("結合した結果：\n");
    printf("%s",s);
}