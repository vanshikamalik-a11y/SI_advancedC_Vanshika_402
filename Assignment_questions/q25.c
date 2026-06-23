#include <stdio.h>

int main() {
    int n, original, rem, i;
    int totalSum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        rem = n % 10;
        
        
        int fact = 1;
        for(i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        
        totalSum = totalSum + fact;
        n = n / 10;
    }

    if(original == totalSum) {
        printf("It is a Strong number.\n");
    } else {
        printf("It is not a Strong number.\n");
    }

    return 0;
}