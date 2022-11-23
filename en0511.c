//テストの点数をスキャンし合計と平均などを表示
#include<stdio.h>
#define student 6 //生徒数を読み込む
#define subject 2 //科目数を読み込む　　　　　この値をかえればOK
 int main(void)

 {

    int test[student][subject];  //配列を宣言
    
    for (int i = 0; i < student; i++)    //配列に値を入れる、外側のforが[student]、内側のforが[subject]
    {
        printf("%d人目の点数を入力してください。\n", i+1);
        for (int j = 0; j < subject; j++)
        {
            printf("%d科目目の点数\n", j+1);              
            scanf("%d",&test[i][j]); 
        }
    }

    for (int j = 0; j < subject; j++)  //科目ごとの合計点と平均点を計算し表示
    {
        int sum = 0;
        int avg = 0;
        for (int i = 0; i < student; i++)
        {
            sum = sum + test[i][j];
        }
        printf("%d科目目の合計は%d点,", j+1, sum);
        avg = sum / student;
        printf("平均は%d点\n", avg);
    }   

    for (int i = 0; i < student; i++)  //生徒ごとの合計点と平均点を計算し表示
    {
        int sum = 0;
        int avg = 0;
        for (int j = 0; j < subject; j++)
        {
            sum = sum + test[i][j];
        }
        printf("%d人目の合計は%d点,", i+1, sum);
        avg = sum / subject;
        printf("平均は%d点\n", avg);
    }


    return 0;

 }