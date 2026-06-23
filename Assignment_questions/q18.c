#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an Alphabet", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a Digit", ch);
    }
    else
    {
        printf("%c is a Special Character", ch);
    }

    return 0;
}