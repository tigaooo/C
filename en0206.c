//身長から標準体重を計算
#include<stdio.h>
 int main(void)
 {
    int a;
    puts("身長を入力してください");
    printf("身長=");scanf("%d",&a);
    

    printf("標準体重は%.1fです。\n",(double)(a - 100)*0.9);// %.数字fで小数点以下桁数を指定

    return 0;
 }