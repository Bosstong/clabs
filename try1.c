#include<stdio.h>
int main()
{
    int count=0;
    char number2;
    unsigned int number3;
    printf("please input the number\n");
    while((number2 = getchar()) != '\n'){
    number3 =number3*10+(number2 - '0');
    }
   while(number3 != 0){
       number3 = number3&(number3-1);
       count++;
       }
    printf("the amount is:%d\n", count);
    return 0;
}