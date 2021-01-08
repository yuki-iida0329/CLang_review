#include <stdio.h>
#include <string.h>
 
void main(){
   char s[10];
   int len;
   char a[3];
   char b[3];

   printf("文字列1：");
   scanf("%s",a);
   strcpy(s,a);
   
   printf("文字列2：");
   scanf("%s",b);
   strcat(s,b);
   
   printf("結合した結果：\n");
   printf("%s",s);
}