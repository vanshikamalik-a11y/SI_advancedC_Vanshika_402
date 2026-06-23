#include <stdio.h>

int main() {
    int num, digit;
    int total_sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    
    for( ; num > 0; num = num / 10) {
        digit = num % 10;
        total_sum = total_sum + digit;
    }

    printf("Sum of digits: %d\n", total_sum);

    return 0;
}