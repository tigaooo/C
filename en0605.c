//1からnまでの総和を計算し返却する
#include<stdio.h>

int sumup(int x)
{
    int ans = 0;
    int i = 0;
    while(i <= x)
    {
        ans = ans + i;
        i++;
    }

    return ans;
}

 int main(void)
 {
    int n;

    puts("整数を入力してください");
    printf("整数n:"); scanf("%d",&n);

    printf("1からnまでの総和は%dです\n",  sumup(n));

    return 0;
 }