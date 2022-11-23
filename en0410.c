#include<stdio.h>
 int main(void)
 {

    int a;

    puts("正の整数を入力してください");
    printf("正の整数a=");scanf("%d",&a);  //変数aに整数を読み込み

    while( a-- > 0 ){                    //aが1以上の間は継続//判定後にaをデクリメント
         putchar('*');
         putchar('\n');
   
    }

    return 0;

 }