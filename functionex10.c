#include<stdio.h>
void swap(int num1,int num2)
{
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("the value of num1 %d\n",num1);
    printf("the value of num2 %d\n",num2);
}
int main()
{
    int num1,num2;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);
    swap(num1,num2);
    return 0;
}