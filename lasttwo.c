#include<stdio.h>
int main()
{
    int num, first, second, third, fourth;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    first = num/1000;
    num%=1000; // Extract the first digit
    second = num/100; // Extract the second digit
    third = (num/10)%10; // Extract the third digit
    fourth = num%10; // Extract the fourth digit
    int reversed_num=second*100+first*1000+third+fourth*10;
    printf("The number with the first two digits reversed is: %d\n", reversed_num);
    return 0;
}
