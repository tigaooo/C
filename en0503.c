#include<stdio.h>
 int main(void)
 {

    int array[5] = {5,4,3,2,1};                          //配列の宣言と初期化

    for(int i = 0; i < 5; i++)
    { 
      printf("a[%d] = %d\n", i, array[i]);              //配列の要素を表示
    }
    return 0;

 }