#ifndef _C_PROB_6_3_H_
#define _C_PROB_6_3_H_

#include <stdio.h>
#include <string.h>

//  生徒の名前（10名まで登録可能）
char names[10][256];
//  データの初期化
void init()
{
    // 名前のクリア
    int i;
    for(i = 0; i < 10; i++){
        strcpy(names[i],"");    //  文字列をクリア
    }
}
//  生徒の名前の設定
void setName(int num,char* name)
{
    //  名前を登録
    if(num >= 0 && num < 10){
        strcpy(names[num],name);
    }
}
//  生徒の名前の表示
void showName(int num)
{
    printf("%d:%s\n",num,names[num]);
}

#endif //_C_PROB_6_3_H_