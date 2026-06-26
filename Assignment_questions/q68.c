#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int num1, num2;
    int result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    result = findGCD(num1, num2);
    printf("GCD is: %d\n", result);

    return 0;
}