#include <stdio.h>
#include "C_prob6-1.h"

void main(){
    int n1,n2;
    int r1,r2;
    printf("n1=");
    scanf("%d",&n1);
    printf("n2=");
    scanf("%d",&n2);
    r1 = div(n1,n2);    //  入力した2つの整数値の商を求める
    r2 = mod(n1,n2);    //  入力した2つの整数値の割り算の余りを求める
    printf("%d / %d = %d 余り %d\n",n1,n2,r1,r2);
}
 
