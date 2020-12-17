#include <stdio.h>
#include "C_prob6-5_logic.h"

//  コンピュータの手
extern int player = 0;
//  プレイヤーの手
extern int computer = 0;

//  乱数の初期化
void init();
//  プレイヤーの手値設定
void setPlayer(int);
//  コンピュータの手設定
void setComputer();