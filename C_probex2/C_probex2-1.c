#include <stdio.h>
#include <math.h>

void main(){
    float x,y;
    float x1;
    float y1;
    float x2;
    float y2;
    double dis;

    printf("1つ目のベクトルのX:");
    scanf("%f", &x1);
    printf("1つ目のベクトルのY:");
    scanf("%f", &y1);
    printf("2つ目のベクトルのX:");
    scanf("%f", &x2);
    printf("2つ目のベクトルのY:");
    scanf("%f", &y2);
    x = x2 - x1;
    y = y2 - y1;
    dis = sqrt((x*x)+(y*y));

    printf("(%f,%f)と(%f,%f)の距離は%lfです", x1, y1, x2, y2, dis);
}