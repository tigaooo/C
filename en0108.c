//二つの入力値の積
#include<stdio.h>

void main (void){
    
    int a,b;

    puts("2つの整数を入力してください");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);

    int c = a * b;

    printf("それらの積は%dです。",c);


}