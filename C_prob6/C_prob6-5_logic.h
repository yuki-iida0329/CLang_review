#ifndef _C_PROB_6_5_LOGIC_H_
#define _C_PROB_6_5_LOGIC_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//  コンピュータの手
int player = 0;
//  プレイヤーの手
int computer = 0;

//  初期化
void init()
{
    srand((unsigned) time(NULL));
}
//  指定した範囲の乱数を発生
void setPlayer(int num)
{
    player = num;
}
//  指定した範囲の乱数を発生
void setComputer()
{
    computer = rand() % 3;
}

#endif // _C_PROB_6_5_LOGIC_H_