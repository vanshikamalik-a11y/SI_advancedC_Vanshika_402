#include <stdio.h>

int findFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * findFactorial(n - 1);
}

int main() {
    int num;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = findFactorial(num);
    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}