#include <stdio.h>
char q,w,e,r,t,y,u,m,o,p;
int a[10];
int i,j;
int temp;
int main(){
printf("请输入10个整数：\n");
while((q=getchar())!=' '){
a[0]=a[0]*10+(q-'0');}
while((w=getchar())!=' '){
a[1]=a[1]*10+(w-'0');}
while((e=getchar())!=' '){
a[2]=a[2]*10+(e-'0');}
while((r=getchar())!=' '){
a[3]=a[3]*10+(r-'0');}
while((t=getchar())!=' '){
a[4]=a[4]*10+(t-'0');}
while((y=getchar())!=' '){
a[5]=a[5]*10+(y-'0');}
while((u=getchar())!=' '){
a[6]=a[6]*10+(u-'0');}
while((m=getchar())!=' '){
a[7]=a[7]*10+(m-'0');}
while((o=getchar())!=' '){
a[8]=a[8]*10+(o-'0');}
while((p=getchar())!='\n'){
a[9]=a[9]*10+(p-'0');}
for(j=0;j<9-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;}
}
printf("The max is：");
printf("%d ",a[9]);
printf("\n");
return 0;
}