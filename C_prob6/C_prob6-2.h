#ifndef _C_PROB6_2_H_
#define _C_PROB6_2_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//  乱数の初期化
void init_rand()
{
    srand((unsigned) time(NULL));
}
//  指定した範囲の乱数を発生
int getRand(int start,int end)
{
    return rand() % (end - start + 1) + start;
}


#endif // _C_PROB6_2_H_