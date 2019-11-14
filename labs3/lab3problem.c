#include<stdio.h>
#include<string.h>
int strindex (char s[], char t[])
{
    int i,j,k;
    for(i = 0;s[i] !='\0'; i++){
        for(j = i,k=0;t[k]!='\0'&& s[j]==t[k];j++,k++);
        if(k>0&&t[k]=='\0')
        return i;
    }
    return -1;
}
main(){
    char a[100];
    char b[100];
    printf("please input the chain of characters\n");
    scanf("%s %s", a,b);
    printf("%d\n",strindex(b,a));
}