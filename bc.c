#include<stdio.h>
int main()
{
    int count = 0;
    int number = 0;
    int number2 = 0;
    printf("please input the number\n");
    scanf("%d", &number2);
    while (number2 !=0)
    {
        number = number2%2;
        number2 = number2/2;
        if(number == 1)
        count++;
    }
    printf("the amount is:%d\n", count);
    return 0;
}