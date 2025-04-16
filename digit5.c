#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    num%=8;
    printf("the remainder is:%d",num);
    return 0;
}