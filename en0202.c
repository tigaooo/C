//二つの整数を読み込んで計算して表示
#include<stdio.h>
 int main(void)
 {
    int a,b;
    puts("二つの整数値を入力してください。");
    printf("整数値：a=");scanf("%d",&a);
    printf("整数値：b=");scanf("%d",&b);

    printf("それらの和は%dで、積は%dです。\n",a+b,a*b);


    return 0;
 }