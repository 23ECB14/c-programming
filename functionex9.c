#include<stdio.h>
int fact=1;
void factorial(int num)
{
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of the given number is %d",fact);
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    factorial(num);
    return 0;
}