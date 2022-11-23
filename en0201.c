//前者の値が後者のどのくらいの割合かを表示する
#include<stdio.h>
 int main(void)
 {
    int x,y;
    puts("二つの整数値を入力してください。");
    printf("整数値：x=");scanf("%d",&x);
    printf("整数値：y=");scanf("%d",&y);

    printf("xの値はyの%d％です。\n",x*100/y);


    return 0;
 }