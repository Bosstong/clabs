#include <stdio.h>
main()
{
    {
        printf("fahr-celsius\n");
    }
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}