#include <stdio.h>
int main()
{
int n;
n = 0;
char c;
int state1 = 0,state = 0;
printf("please int something\n");
while ((c = getchar()) !='\n'){
    if ((c >= 'A'&& c <= 'Z') || (c >= 'a'&& c <= 'z')){
    state = 1;}
    else {
    state = 0;}
    if(state == 1&&state1 == 0){
    n++;
}
 state1 =  state;
}

printf("the number of words is:%d\n",n);

}