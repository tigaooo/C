//データをよみこみ表示
#include<stdio.h>
#define element 100                    //要素数(最大)

 int main(void)
 {
    int array[element];                //配列の宣言
    int scan_element;                  //データ数を読み込む変数


    printf("データ数はいくつですか　データ数:");              //配列のデータ数を読み込む
    scanf("%d",&scan_element); 

    for(int i = 0; i < scan_element; i++)   //データ数分、配列に要素を代入
    {
      printf("%d番目のデータ:", i+1);            
      scanf("%d",&array[i]);                  
    }
    
    if (scan_element == 1)                  //読み込んだデータ数が1なら表示
    {
        printf("{%d}", array[0]);
    }
    else                                    //1以外は
    {
        for(int i = 0; i < scan_element; i++) //データ数分表示
        {
            if(i == 0)                        //最初のデータの表示 {データ,
            {
                printf("{%d,", array[i]);
            }
            else if(i == scan_element - 1)    //最後のデータの表示　空白データ}
            {
                printf(" %d}", array[i]);
            } 
            else                              //上記以外の表示　空白データ,
            {
                printf(" %d,", array[i]);
            }
        }
    }
 return 0;
 } 