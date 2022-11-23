#include <stdio.h>
int main(void){

  printf("   |");           //変数の値を表示
  for(int a=1; a<=9; a++)
  {
    printf("%3d", a);
  }
  printf("\n");

 
  for(int b=1; b<=30; b++)  //線を表示、交わるところは＋表示
  {
    if (b==4)
    {
        printf("+");
    }
    printf("-");
  }
  printf("\n");


  for(int i=1; i<=9; i++)  //二重ループで九九の一覧表を出力する 
  {
    printf("%3d|",i);
    for(int j=1; j<=9; j++)
    {
      printf("%3d", i*j);
    }
    printf("\n");
  }
  return 0;
}