#include<stdio.h>
int main()
{
    int count=0;
    char number2;
    int number3 = 0;
    int i = 0;
    printf("please input the number\n");
    while((number2 = getchar()) != '\n'){
    number3 =number3*10+(number2 - '0');
    }
    while(number3 != 0){
    i = number3 - (number3/2)*2;
    number3 = number3/2;
    if(i==1){
      count++;
    }
    }    
    printf("the amount is:%d\n", count);
    return 0;
}