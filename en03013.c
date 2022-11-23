#include<stdio.h>
 int main(void)
 {
    int month;

    puts("何月か教えてください。:");
    scanf("%d",&month);

    switch(month){

      case 12:
      case 1:
      case 2:
             printf("冬ですね。\n"); break;
      case 3:
      case 4:
      case 5:
             printf("春ですね。\n"); break;
      case 6:
      case 7:
      case 8:
             printf("夏ですね。\n"); break;  
      case 9:
      case 10:
      case 11:
             printf("秋ですね。\n"); break;           
      default:
             printf("一年は12か月間です。"); break;        
      
    }
   

    return 0;
 }
