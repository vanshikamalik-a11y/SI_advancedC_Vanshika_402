#include <stdio.h>

int main()
{
    float r, area, circumference;
    float pi = 3.14;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = pi * r * r;
    circumference = 2 * pi * r;

    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f", circumference);

    return 0;
}