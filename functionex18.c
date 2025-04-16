#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    //n=n&1;
    n=n^1;
    printf("the value is:%d",n);
    return 0;
}