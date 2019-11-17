#include<stdio.h>
int main(){
    printf("please input a chain of chracters(no more than 50)\n");
    char a[50];
    int i = 0;
    int count = 0;
    int amount = 0;
    int k = 0;
    while((a[i]= getchar()) != '\n'){
        i++;
    }
    for(k = 0;k<i;k++){
        if(a[k]=='a'||a[k]=='A')
        count++;
    }
    for(k = 0;k<i;k++){
        if(a[k]=='0')
        amount++;
    }
    printf("the amount of '0'is: %d\n",amount);
    printf("the amount of 'a'or 'A'is: %d\n",count);
    return 0;
}