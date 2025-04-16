#include<stdio.h>
int main()
{
    int num,quo,rem;
    printf("enter two digit number:");
    scanf("%d",&num);
    quo=num/10;
    rem=quo%10;
    printf("the ten's digit number is:%d\n",rem);
    return 0;
}