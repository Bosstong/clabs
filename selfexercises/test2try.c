#include <stdio.h>
int main(void)
{
    unsigned int a = 0, b = 0;
    char c, j;
    unsigned int m[1000];
    unsigned int n[1000];
    int p= 0, q = 0;

    while (1)
    {
        m[p] = getchar();
        if(m[p] == ' ')
        {
            break;
        }
        a = a * 10 + m[p] - '0';
        p++;
    }
    while (1)
    {
        n[q] = getchar();
        if(n[q] == ' ')
        {
            break;
        }
        b = b * 10 + n[q] - '0';
        q++;
    }
    c = getchar();
    j = getchar();
    if (j == '\n')
    {
        switch (c)
        {
        case '+':
            printf("%.1lf", a + b);
            break;
        case '-':
            printf("%.1lf", a - b);
            break;
        case '*':
            printf("%.1lf", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Error: cannot divide a number by 0！");
            else
                printf("%.1f", a * 1.0 / b);
            break;
        default:
            break;
        }
    }
    return 0;
}
