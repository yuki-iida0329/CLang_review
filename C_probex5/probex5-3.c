#include <stdio.h>
#include <string.h>
 
void main(){
   char s[10];
   int len;

   printf("文字列を入力：");
   scanf("%s", s);
   len = strlen(s);
   printf("文字列の長さ：%d文字\n",len);
}