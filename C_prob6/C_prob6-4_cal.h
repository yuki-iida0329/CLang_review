#ifndef _C_PROB_6_4_CAL_H_
#define _C_PROB_6_4_CAL_H_

int ans;

//  初期値の設定
void init(int num)
{
    ans = num;  //  値の初期化
}
//  加算
void add(int num)
{
    ans += num; //  現在の値に足し算
}
//  減算
void sub(int num)
{
    ans -= num; //  現在の値から引き算
}

#endif //_C_PROB_6_4_CAL_H_