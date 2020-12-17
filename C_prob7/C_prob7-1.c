#include<stdio.h>

int a;
int b;
int c;
int x;
int y;
int num[100][3];
int i=0;
int j=0;
int k=0;


void main(){
    for(a=1; a < 101; a++){
        for(b=1; b < 101; b++){
            for(c=1; c < 101; c++){
                x = (a*a) + (b*b);
                y = c*c;
                if(x == y){
                    num[i][0] = a;
                    num[i][1] = b;
                    num[i][2] = c;
                    i++;
                }
            }
        }
    }
    
    for(k=0; k < i; k++){
        printf("a = %d b = %d c = %d sum = %d\n", num[k][0], num[k][1], num[k][2], num[k][2]*num[k][2]);

    }
}