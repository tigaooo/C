#include<stdio.h>
 int main(void)
 {

    int array[5];                           //配列の宣言

    for(int i = 0; i < 5; i++)
    {
      array[i] = i;                        //配列の要素に値を代入
      printf("a[%d] = %d\n", i, array[i]); //配列の要素を表示
    }
    return 0;

 }