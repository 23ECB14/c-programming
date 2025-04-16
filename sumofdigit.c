#include<stdio.h>
int main()
{
    int num,rem,n=0;
    printf("enter the digit:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        n+=rem;
        num/=10;
    }
    printf("the sum of digits is:%d\n",n);
    return 0;
}