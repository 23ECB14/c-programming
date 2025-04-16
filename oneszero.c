#include<stdio.h>
int main()
{
    int num,rem;
    printf("enter two digit number:");
    scanf("%d",&num);
    int div=num/10;
    rem=num%10;
    rem=0;
    printf("the one's digits number is:%d%d",div,rem);
    return 0;
}