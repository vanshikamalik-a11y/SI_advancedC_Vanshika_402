#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }

    return 0;
}