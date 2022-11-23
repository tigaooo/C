#include<stdio.h>
 int main(void)
 {

    int array[5];                           //配列の宣言
    int j = 5;                              //代入するはじめの値

    for(int i = 0; i < 5; i++)
    {
      array[i] = j - i;                    //配列の要素に値を代入//iがインクリメントされるごとにjから引かれる値が1ずつ増える     
      printf("a[%d] = %d\n", i, array[i]); //配列の要素を表示
    } 
    return 0;

 }