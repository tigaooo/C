#include<stdio.h>
 int main(void)
 {
    int A,B,C;

    puts("三つの整数を入力してください");
    printf("整数値A=");scanf("%d",&A);
    printf("整数値B=");scanf("%d",&B);
    printf("整数値C=");scanf("%d",&C);

    printf("最小値は%dです。\n",A < B ? A : B < C ? B : C);

    return 0;
 }
