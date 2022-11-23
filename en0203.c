//読み込んだ実数をそのまま表示
#include<stdio.h>
 int main(void)
 {
    double a;
    puts("実数を入力してください。");
    scanf("%lf",&a);  //floatling
    

    printf("あなたは%fと入力しましたね\n",a);


    return 0;
 }