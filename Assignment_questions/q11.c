#include <stdio.h>

int main()
{
    int days, years, weeks, remainingDays;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    remainingDays = days % 365;

    weeks = remainingDays / 7;
    remainingDays = remainingDays % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", remainingDays);

    return 0;
}