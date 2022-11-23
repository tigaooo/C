#include<stdio.h>
 int main(void)
 {
    int A,B,C;

    puts("三つの整数を入力してください");
    printf("整数値A=");scanf("%d",&A);
    printf("整数値B=");scanf("%d",&B);
    printf("整数値C=");scanf("%d",&C);

   if(A == B && B == C)
     printf("三つの値は等しいです。\n");
   else if (A == B || B == C || A == C)
     printf("二つの値は等しいです。\n");
   else
     printf("三つの値は異なります。\n");
    return 0;
 }
