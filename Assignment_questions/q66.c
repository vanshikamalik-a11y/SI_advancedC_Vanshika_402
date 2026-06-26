#include <stdio.h>

void callByValue(int x) {
    x = x + 10;
}

void callByReference(int *x) {
    *x = *x + 10;
}

int main() {
    int num1 = 20;
    int num2 = 20;

    callByValue(num1);
    printf("After call by value: %d\n", num1);

    callByReference(&num2);
    printf("After call by reference: %d\n", num2);

    return 0;
}