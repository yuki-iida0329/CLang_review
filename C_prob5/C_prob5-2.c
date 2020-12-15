#include<stdio.h>

void main(){
    float d[4] = {1.2, -1.3, 5.2, 4.8};
    int i;

    for(i = 0; i <= 3; i++){
        printf("d[%d]=%f", i, d[i]);
    }
}