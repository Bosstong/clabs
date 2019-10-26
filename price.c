#include <stdio.h>
int main()
{
    int price = 0;    int bill = 0;
    printf("please input the price \n");
    scanf("%d", & price);
    printf("please input the bill \n");
    scanf("%d",& bill);
    if (price <= bill)
    {printf ("the change is %d\n",bill - price);
    }
    return 0;
}