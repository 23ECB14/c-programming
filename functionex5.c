#include<stdio.h>
void sum(int num1,int num2);
void sub(int num1,int num2); //function declaration
int main()
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    sum(num1,num2);
    sub(num1,num2);   //function call
    return 0;
}
void sum(int num1,int num2) //function definition
{
    /*int num1=15,num2=30;*/
    int res1=num1+num2;
    printf("the result is:%d\n",res1);
}
void sub(int num1,int num2)
{
    int res2=num1-num2;
    printf("the result is:%d",res2);
}

