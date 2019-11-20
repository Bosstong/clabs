#include<stdio.h>
int main(){
unsigned long long int a = 1;
int count = 0;
while(a!=0){
    a=a<<1;
    count++;
}
printf("the max is %llu,the min is %llu the sizeof if %d\n",a-1,a,count);   
}