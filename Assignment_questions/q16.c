#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, r1, r2, realPart, imagPart;

    printf("Enter values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;   // discriminant

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);

        printf("Roots are real and equal\n");
        printf("Root = %.2f\n", r1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);

        printf("Roots are complex\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}