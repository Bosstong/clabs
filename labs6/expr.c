#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXOP 100
#define NUMBER '0'
int getop(char s[]);
void push(double);
double pop(void);
char s[MAXOP];
main(int argc, char *argv[])
{
    int type;
    double op2;
    int j = 1;
    int a = argc;
    while((argc--)>0 && j<a){
    type = getop(argv[j++]);
        switch (type)
        {
        case NUMBER:
            push(atof(argv[j-1]));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error:zero divisor\n");
            break;
        default:
            printf("error:unknown command %s\n", s);
            argc=1;
            break;
        }
    }
    printf("\t%.8g\n",pop());
    return 0;
}
#define MAXVAL 100
int sp = 0;
double val[MAXVAL];
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
    {
        printf("error:stack full,can't push %g\n", f);
    }
}
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
    {
        printf("error:stack empty\n");
        return 0.0;
    }
}

int getop(char s[])
{
    if (*s> '9' || *s < '0')
        return *s;
    else
        return NUMBER;
        
}