#include <stdio.h>
int main()
{
    unsigned int a = 1;
    int n = 0;
    while (a !=0)
    {
        a=a<<1;
        n=n+1; 
    }
    printf("the amount is %d\n",n);
    printf("the max is%u\n",a-1);
    return 0;
}