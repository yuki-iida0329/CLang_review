#include <stdio.h>
#include <string.h>
#include "C_prob6-3.h"
 
//  生徒の名前（10名まで登録可能）
extern char names[10][256];
 
void main(){
    init();
    setName(0,"山田太郎");
    setName(1,"太田花子");
    setName(2,"徳川家康");
    showName(1);
    showName(2);
    showName(0);
}
 
