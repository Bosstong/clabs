#include<stdio.h>
#include<string.h>
void reverse(char s[],int i, int j){
    int a;
    int b;
    b = j-(i + 1);
    if(i<b){
        a=s[i];
        s[i]=s[b];
        s[b]=a;
        reverse(s,++i,j);
    }
}
int main(){
    char s;
    char t[1000];
    int i = 0;
    int k = 0;
    while((s = getchar()) != '\n'){
        t[i]=s;
        k=++i;
    }
    reverse(t,0,k);
    for(i=0;i<k;i++)
    printf("%c",t[i]);
}