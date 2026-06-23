#include <stdio.h>

int main() {
    int n1, n2, i, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    
    int small = (n1 < n2) ? n1 : n2;

    
    for(i = 1; i <= small; i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i; 
    }

    
    lcm = (n1 * n2) / gcd;

    printf("GCD is: %d\n", gcd);
    printf("LCM is: %d\n", lcm);

    return 0;
}