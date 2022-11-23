#include<stdio.h>
 int main(void)
 {

    int a;

    puts("正の整数を入力してください");
    printf("正の整数a=");scanf("%d",&a);  //変数aに整数を読み込み

    for (int i = 0; i < a; i++)      //iがa以下の間継続
    {
        if (i%5==0)                  //5こ表示するごとに改行なので、iを5で割って余りが0のときは改行となる。
        {
            putchar('\n');
        }        
        putchar('*');               //表示
        
    }

    return 0;

 }