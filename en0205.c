//前者の値が後者のどのくらいの割合かを小数まで表示する。
#include<stdio.h>
 int main(void)
 {
    int a,b;
    puts("二つの整数を入力してください。");
    printf("整数値：a=");scanf("%d",&a);
    printf("整数値：b=");scanf("%d",&b);

    printf("xの値はyの%lf％です。\n",(double)a*100/b);  //floatling,キャスト演算


    return 0;
 }