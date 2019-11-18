#include<stdio.h>
int main(){
 double a = 0;
 double b = 0;
 char c;
 int t = 0;
 printf("please input two positive number(divide by SPACE)\n");
 scanf("%le %le %c",&a,&b,&c);
 if(c=='+'){
     t=1;
 }else if(c=='-'){
     t=2;
 }else if(c=='/'){
     t=3;
 }else if(c=='*'){
     t=4;
 }
 switch(t){
 case(1):printf("The expression has a value of:%.1f\n",a+b);
 break;
 case(2):printf("The expression has a value of:%.1f\n",a-b);
 break;
 case(3):if(b!=0){
    printf("The expression has a value of:%.1f\n",a/b);
 }else{printf("Error:cannnot divide a number by 0!\n");}
 break;
 case(4):printf("The expression has a value of:%.1f\n",a*b);
 break;
 default:printf("error input\n");
 }
}
