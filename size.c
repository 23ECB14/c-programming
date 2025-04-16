#include<stdio.h>
int main()
{
    int int_size=sizeof(int);
    float float_size=sizeof(float);
    double double_size=sizeof(double);
    int char_size=sizeof(char);
    printf("size of %d\n",int_size);
    printf("size of %f\n",float_size);
    printf("size of %.2lf\n",double_size);
    printf("size of %d\n",char_size);
    return 0;
}
