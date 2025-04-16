#include<stdio.h>
int num1,num2;
void add();
void sub();
void product();
void div();
void modulus();

void add()
{
    int sum=num1+num2;
    printf("the addition of numbers is:%d",sum);
}
void sub()
{
    int diff=num1-num2;
    printf("the subtraction of numbers is:%d",diff);
}
void product()
{
    int multi=num1*num2;
    printf("the multiplication of numbers is:%d",multi);
}
void div()
{
    if (num2 != 0)
    {
        float quotient = (float)num1 / num2;
        printf("The division of numbers is: %.2f\n", quotient);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }
}
void modulus()
{
    if (num2 != 0)
    {
        int mod = num1 % num2;
        printf("The modulus of numbers is: %d\n", mod);
    }
    else
    {
        printf("Modulus by zero is not allowed.\n");
    }
}
int main()
{
    printf("enter the value of num1 :");
    scanf("%d",&num1);
    printf("enter the value of num2 :");
    scanf("%d",&num2);
    int choice;
    printf("enter your choice\n1.add\n2.sub\n3.product\n4.div\n5.modulus");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            product();
            break;
        case 4:
            div();
            break;
        case 5:
            modulus();
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}