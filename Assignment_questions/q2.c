#include <stdio.h>

int main()
{
    int num;
    float f;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nInteger = %d", num);
    printf("\nFloat = %.2f", f);
    printf("\nCharacter = %c", ch);

    return 0;
}