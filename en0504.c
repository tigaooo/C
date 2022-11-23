#include<stdio.h>
#define element 10              //要素数
#define reversal (element - 1)  //反転要素の添え字(要素数－１)
#define process (element / 2)   //反転に必要な処理の回数（要素と反転要素を入れ替える回数）
 int main(void)
 {

    int x[element];                       //配列の宣言

    for(int i = 0; i < element; i++) 
    {
      printf("x[%d] : ", i);              //配列の要素の値を読み込む
      scanf("%d",&x[i]);                  
    }
    for(int i =0; i < process; i++)           //要素の並びを反転
    {
      int work        = x[i];         
      x[i]            = x[reversal - i];
      x[reversal - i] = work;
    }
    puts("反転しました。");               //反転された要素の値を表示
    for(int i = 0; i < element; i++) 
    {
      printf("x[%d] =%d\n", i, x[i]); 
    }
    
    return 0;

 }