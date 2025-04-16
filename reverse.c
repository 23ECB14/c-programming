#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        printf("%d",num%10);
        num=num/10;
        count++;
    }
    printf("no of digits=%d",count);
    return 0;
}