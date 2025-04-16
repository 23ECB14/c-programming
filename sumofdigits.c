#include<stdio.h>
int main()
{
    int num,n=0;
    printf("enter the three digit number:");
    scanf("%d",&num);
    while(num>0)
    {
        int rem=num%10;
        n+=rem;
        num/=10;
    }
    printf("the sum of digits:%d",n);
    return 0;
}