#include<stdio.h>
int main()
{
    int num,power,answer=1;
    printf("enter num,pow");
    scanf("%d %d",&num,&power);
    while(power>0)
    {
        answer=num*answer;
        power--;
    }
    printf("the result is:%d",answer);
    return 0;
}