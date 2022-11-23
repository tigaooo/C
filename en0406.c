#include<stdio.h>
 int main(void)
 {

    int a;
    int i = 2;

    puts("整数を入力してください");
    printf("整数値a=");scanf("%d",&a);  //変数aに整数を読み込み

    while( i < a ){                     //iがa未満の間
       printf("%d\n",i);                //iを表示 
       i += 2;                          //iに2を足す
    }

    return 0;


 }