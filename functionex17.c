#include<stdio.h>
int f(int a)
{
    (a>20)? 10: 20;
}
int main()
{
    int f(int);
    int b;
    b=f(20);
    printf("%d\n",b);
    return 0;
}