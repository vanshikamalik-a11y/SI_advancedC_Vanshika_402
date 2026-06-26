#include <stdio.h>

int main() {
    char str[100];
    int len, i;
    int isPalindrome = 1; 

    printf("Enter a string: ");
    scanf("%s", str);

    for (len = 0; str[len] != '\0'; len++) {}

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}