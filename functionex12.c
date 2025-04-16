#include<stdio.h>
int num,rem;
void sum_of_digits()
{
    int n=0;
    while(num>0)
    {
        rem=num%10;
        num/=10;
        n+=rem;
    }
    printf("the sum of digits is:%d\n",n);
}
int main()
{
    printf("enter the digit:");
    scanf("%d",&num);
    sum_of_digits();
    return 0;
}