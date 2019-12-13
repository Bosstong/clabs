#include <stdio.h>
int main()
{
    printf("Please input any alphanumeric length not exceeding 50 characters：\n");
    char m[50];
    int count=0,n=0,i=0;
    while((m[i]=getchar())!='\n')
        if(m[i]==' ')
            n=0;
        else if(m[i]>='0' && m[i]<='9')
            n=0;
        else if(m[i]>='!' && m[i]<='/')
            n=0;
        else if(m[i]>=':' && m[i]<='@')
            n=0;
        else if(m[i]>='[' && m[i]<='`')
            n=0;
        else if(m[i]>='{' && m[i]<='~')
            n=0;
        else if(n==0)
        {
            n=1;
            count++;
        }
     
    printf("The number of words is:%d\n",count);
    return 0;
}