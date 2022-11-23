#include<stdio.h>
 int main(void)
 {

    int a;
    int suuji = 1;

    puts("正の整数を入力してください");
    printf("正の整数a=");scanf("%d",&a);  //変数aに整数を読み込み

    for (int i = 0; i < a; i++)          //iがa未満の間継続
    {
        printf("%d",suuji++);            //suujiを表示した後にインクリメント
        if (suuji==10)                   //9の後に表示したいのは0なので10になっていた場合0にする
        {
            suuji = 0;
        }
    }
    
    return 0;

 }