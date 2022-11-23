//二つの整数値の小さい値を返す
#include<stdio.h>

int min2(int a, int b)
{
    return a < b ? a : b;
}

 int main(void)
 {
    int x,y;

    puts("二つの整数値を入力してください。");
    printf("整数x:"); scanf("%d",&x);
    printf("整数y:"); scanf("%d",&y);

    printf("%dのほうが小さいです。\n", min2(x,y));

    return 0;
 }