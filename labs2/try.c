#include<stdio.h>
int main()
{
    int count=0;
    unsigned int number = 1;
    char number2;
    unsigned int number3;
    int i = 0;
    printf("please input the number\n");
    while((number2 = getchar()) != '\n'){
    number3 =number3*10+(number2 - '0');
    }
   while(number != 0){
   i = number3 & number;
    number = number<<1;
   if(i !=0 ){
       count++;
   }
   }
    printf("the amount is:%d\n", count);
    return 0;
}