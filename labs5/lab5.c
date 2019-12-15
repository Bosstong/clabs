#include <stdio.h>
#include <ctype.h>
char buf[100];
int bufp = 0;
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
    if (bufp >= 100)
        printf("full");
    else
        buf[bufp++] = c;
}
int getfloat(float *pn)
{
    int c, sign;
    float i;
    while (isspace(c = getch())&&c!='\n')
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.')
    {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    int flag = 0;
    for (*pn = 0.0, i = 1; isdigit(c) || c == '.'; c = getch())
    {
        if (c == '.')
            flag = 1;
        else if (flag == 1)
        {
            i *= 0.1;
            *pn = *pn + (c - '0') * i;
        }
        else if (isdigit(c))
            *pn = 10.0 * *pn + (c - '0');
    }
    *pn *= sign;
    if (c != '\n')
        ungetch(c);
    else
    {
        ungetch(c);
    }
    
    return *pn;
}
int main()
{
    float a[100];
    int n = 0;
    float sum = 0;
    for (int i = 0; i < 100; i++)
    {
        getfloat(&a[i]);
        if (a[i] != '\0')
        {
            n++;
            sum += a[i];
        }
        else
        {
            break;
        }
    }
    printf("%g\n", sum);
}