#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "C_prob6-5_logic.h"
#include "C_prob6-5_res.h"
 
void main(){
    int num;
    init();
    printf("じゃんけんゲーム\n");
    printf("0:グー、1:チョキ、2:パー\n");
    while(1){
        printf("あなたの手は？(0-2):");
        scanf("%d",&num);
        if(num < 0 || num > 2){
            printf("終了します\n");
            break;
        }else{
            setPlayer(num); //  自分の手設定
            setComputer();  //  コンピュータの手設定
            Judge();        //  判定
        }
    }
}
 

 
