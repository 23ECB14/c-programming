#include<stdio.h>
int main()
{
    int num;
    printf("enter two digit number:");
    scanf("%d",&num);
    num%=10;
    printf("the one's digits number is:%d",num);
    return 0;
}