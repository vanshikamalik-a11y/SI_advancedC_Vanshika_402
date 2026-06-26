#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n <= 1) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isArmstrong(int n) {
    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;
    int i, j;

    for (; temp > 0; temp /= 10) {
        digits++;
    }

    temp = n;
    for (; temp > 0; temp /= 10) {
        int remainder = temp % 10;
        int power = 1;
        for (j = 0; j < digits; j++) {
            power *= remainder;
        }
        sum += power;
    }

    if (sum == original) return 1;
    return 0;
}

int isPerfect(int n) {
    int sum = 0;
    int i;
    if (n <= 1) return 0;
    
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) return 1;
    return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num) == 1) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
    }

    if (isArmstrong(num) == 1) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (isPerfect(num) == 1) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}