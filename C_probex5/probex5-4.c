#include <stdio.h>
#include <string.h>
 
void main(){
   char s[10];
   int len=0;
   int i;

   printf("文字列を入力：");
   scanf("%s", s);
   for(i=0;i<10;i++){
       if(s[i] != '\0'){
           len++;
       }   
   }
   printf("文字列の長さ：%d文字\n",len);
}