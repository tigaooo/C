//三つの入力値の和
#include<stdio.h>

void main (void){
    
    int a,b,c;

    puts("3つの整数を入力してください");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("整数c:"); scanf("%d",&c);
    
    int d = a + b + c;

    printf("それらの和は%dです。",d);
}