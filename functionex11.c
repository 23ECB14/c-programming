#include<stdio.h>
int num;
void sum_of_numbers()
{
    int sum=0;
    for(int i=0;i<=num;i++)
    {
        sum+=i;
    }
    printf("the sum of numbers is:%d",sum);
}
int main()
{
    printf("enter the value of num:");
    scanf("%d",&num);
    sum_of_numbers();
    return 0;
}