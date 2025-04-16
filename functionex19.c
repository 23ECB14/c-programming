#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the position of n:");
    scanf("%d",&pos);
    n=n|(1<<pos-1);
    printf("the value is:%d",n);
    return 0;
}