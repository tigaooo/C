#include<stdio.h>
 int main(void)
 {
    int A,B;

    puts("二つの整数を入力してください");
    printf("整数値A=");scanf("%d",&A);
    printf("整数値B=");scanf("%d",&B);

    if(A % B == 0)
       puts("BはAの約数です。");
   else
       puts("BはAの約数ではありません。");

    return 0;
 }
