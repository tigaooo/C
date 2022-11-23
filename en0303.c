#include<stdio.h>
 int main(void)
 {
    int A,B;

    puts("整数を入力してください");
    printf("整数値A=");scanf("%d",&A);

    if(A < 0)
       A = A*-1;
   
     printf("Aの絶対値は%dです。",A);
      
    return 0;
 }
