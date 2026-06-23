#include <stdio.h>

int main() {
    int n, original, rem;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem); 
        n = n / 10;
    }

    if(original == sum) {
        printf("It is an Armstrong number.\n");
    } else {
        printf("It is not an Armstrong number.\n");
    }

    return 0;
}