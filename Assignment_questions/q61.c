#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    printf("Enter a string for lowercase: ");
    scanf("%s", str1);
    printf("Enter a string for uppercase: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            str2[i] = str2[i] - 32;
        }
    }

    printf("Lowercase string: %s\n", str1);
    printf("Uppercase string: %s\n", str2);

    return 0;
}