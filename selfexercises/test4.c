#include <stdio.h>
int bitcount(unsigned long long int x);
int main()
{
    unsigned long long int a, b;
    a = 0;
    b = ~a;
    printf("unsigned long long int is sizeof %d. The max is %llu, the min is %llu\n", bitcount(1), b, a);
    return 0;
}
int bitcount(unsigned long long int x)
{
    int b;
    for (b = 0; x != 0; x <<= 1)
        b++;
    return b;
}
