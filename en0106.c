//入力値とbの差
#include<stdio.h>

void main (void){

    int a,b,c;
    b = 7;
    
    printf("整数を入力してください。:");
    scanf("%d",&a);

    c = a - b;

    printf("%dから%dを減じると%dです。",a,b,c);
}