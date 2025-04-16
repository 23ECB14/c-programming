#include<stdio.h>
int main()
{
    int num,rem,reverse=0;
    printf("enter the number to be reversed:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        //reverse=reverse*10+rem;
        num/=10; 
    }
    printf("the reverse number is:%d",reverse);
    return 0;
}

/*#include<stdio.h>
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
}*/
