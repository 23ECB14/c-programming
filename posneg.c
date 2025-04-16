#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (num>0)
    {
        printf("it is positive number");
    }
    else{
        printf("it is negative number");
    }
    return 0;
}