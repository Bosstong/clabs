#include<stdio.h>
int main(){
    printf("please input a chain of chracters(no more than 50)\n");
    char a;
    int count = 0;
    int amount = 0;
    while((a= getchar()) != '\n'){
        if(a=='a'||a=='A'){
            count++;
        }
        if(a=='0'){
            amount++;
        }
    }
    printf("the amount of '0'is: %d\n",amount);
    printf("the amount of 'a'or 'A'is: %d\n",count);
    return 0;
}