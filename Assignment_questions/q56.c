#include <stdio.h>

int main() {
    char s1[100] = "Hello ";
    char s2[100] = "World";
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {
    }

    for (j = 0; s2[j] != '\0'; j++) {
        s1[i] = s2[j];
        i++;
    }
    s1[i] = '\0'; 

    printf("Concatenated string: %s\n", s1);

    return 0;
}