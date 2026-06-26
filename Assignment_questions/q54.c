#include <stdio.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    for (length = 0; str[length] != '\0'; length++) {
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}