#include <stdio.h>
 
void foo();
 
void main(){
    int i;
    for(i = 0; i < 4; i++){
        foo();
    }
}
 
void foo()
{
    static int num = 0;         //  最初に一度だけ実行される
    printf("num=%d\n",num);
    num++;
}