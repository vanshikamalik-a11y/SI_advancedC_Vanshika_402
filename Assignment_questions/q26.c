#include <stdio.h>

int main() {
    int n, rem;
    int rev = 0; 

    printf("Enter a number: ");
    scanf("%d", &n);

    
    for( ; n != 0; n = n / 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}