#include <stdio.h>
int Prime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num); 
        }
        else{
            printf("%d is a prime number.\n", num);
        }
    }
    return 1;   
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Prime(num);
    return 0;
}
