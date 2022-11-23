//累乗を計算し返却する
#include<stdio.h>

int cube(int a, int b)
{
    int ans = 1;
    while(b!=0)
    {
        ans = ans * a;
        
        b--;
    }

    return ans;
}

 int main(void)
 {
    int x,y;

    puts("基数を入力してください");
    printf("基数x:"); scanf("%d",&x);
    puts("指数を入力してください");
    printf("指数y:"); scanf("%d",&y);

    printf("%dの%d乗は%dです\n", x, y, cube(x,y));

    return 0;
 }