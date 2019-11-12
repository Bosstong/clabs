#include<stdio.h>
#include<math.h>
int power(int base, int n){
    int i,p;
    p=1;
    for (i=1;i<=n;++i)
    p = p*base;
    return p;
}
int main()
{
    char number1[18] = {0};
    int i = 0;
    char number;
    int sum = 0;
    int gen =-1;
    unsigned int b = 1;
    printf("please input a positive hexadecimal number(start with 0X/0x)\n");
    while((number = getchar()) != '\n'){
        number1[i]=number;
        i++;
        gen++;
    }
        if(number1[0]!='0'){
        printf("input error\n");
        return 0;}
        if(number1[1]!='x'&&number1[1]!='X'){
            printf("input error\n");
            return 0;
        }
    i--;
    while(i > 1)
    {
            if(number1[i]<='9'&&number1[i]>='0')
                sum+=(number1[i]-'0')*power(16,gen-i);
            else if(number1[i]>='A'&&number1[i]<='F')
                sum+=(number1[i]-'A'+10)*power(16,gen-i);
            else{
                printf("input error\n");
                return 0;
                }
            i--;
    }
    while(b!=0){
        b=b<<1;
    }
    if(sum>b-1){
    printf("the max is %u,your input number  is too big\n",b-1);
    }
    else printf("%d\n",sum);
    return 0;
}