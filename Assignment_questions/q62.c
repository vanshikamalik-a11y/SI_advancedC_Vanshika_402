#include <stdio.h>

int main() {
    char str[5][100], temp[100];
    int i, j, k, match;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", str[i]);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            
            match = 0;
            for (k = 0; str[i][k] != '\0' || str[j][k] != '\0'; k++) {
                if (str[i][k] != str[j][k]) {
                    if (str[i][k] > str[j][k]) {
                        match = 1;
                    }
                    break;
                }
            }

            if (match == 1) {
                for (k = 0; str[i][k] != '\0'; k++) {
                    temp[k] = str[i][k];
                }
                temp[k] = '\0';

                for (k = 0; str[j][k] != '\0'; k++) {
                    str[i][k] = str[j][k];
                }
                str[i][k] = '\0';

                for (k = 0; temp[k] != '\0'; k++) {
                    str[j][k] = temp[k];
                }
                str[j][k] = '\0';
            }
        }
    }

    printf("\nSorted strings:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}