#ifndef _C_PROB_6_5_RES_H_
#define _C_PROB_6_5_RES_H_

#include "C_prob6-5_logic.h"
#include <stdio.h>

char results[3][16]  = {"グー","チョキ","パー"};

void Judge(){
    printf("プレイヤー:%s\n",results[player]);
    printf("コンピューター：%s\n",results[computer]);
    if((player == 0 && computer == 1)
     || (player == 1 && computer == 2) 
     || (player == 2 && computer == 0)){
        printf("プレイヤーの勝ち\n");
    }else if((player == 1 && computer == 0) 
    || (player == 2 && computer == 1) 
    || (player == 0 && computer == 2)){
        printf("コンピュータの勝ち\n");
    }else{
        printf("あいこです。\n");
    }
}

#endif // _C_PROB_6_5_RES_H_