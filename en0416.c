#include<stdio.h>
 int main(void)
 {

    int a;

    puts("正の整数を入力してください");
    printf("正の整数a=");scanf("%d",&a);  //変数aに整数を読み込み

    for (int i = 1; i <= a; i++,i++)      //iがa以下の間継続//2回インクリメントして奇数にする
    {
        printf("%d ",i);                  //表示
    }

    return 0;

 }