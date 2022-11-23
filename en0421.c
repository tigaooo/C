#include <stdio.h>
int main(void){

    int a,i,j;
    i = 0;
    j = 0;

    puts("正方形を作ります。");
    printf("何段ですか:");scanf("%d",&a);  //変数aに整数を読み込み

    while (i<a)
    {
        while (j<a)
        {
            putchar('*');
            j++;
        }
        putchar('\n');
        i++;
        j=0;
        
    }
    

  return 0;
}