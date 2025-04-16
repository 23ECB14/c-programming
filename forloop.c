#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(int x=1;x<=num;x++)
    {
        if(x%2==0)
        {
            sum+=x;
        }
    }
    printf("the addition of even numbers:%d",sum);
    return 0;
}