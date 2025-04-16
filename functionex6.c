#include<stdio.h>
void evenorodd(int num);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    evenorodd(num);
    return 0;
}
void evenorodd(int num)
{
    if (num%2==0){
        printf("it is an even number");
    }
    else
    {
       printf("it is an odd number"); 
    }
}
