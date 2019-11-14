#include<stdio.h>
int main()
{const int PASS = 60;
int score = 0;
printf("please input your score\n");
scanf("%d", &score);
if (PASS <= score)
{printf ("you pass\n");
}else 
{printf ("you lose\n");}
return 0;
}