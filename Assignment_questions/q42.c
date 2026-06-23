#include <stdio.h>

int main()
{
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[100], b[100];

    for(i=0; i<n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i=0; i<n2; i++)
        scanf("%d", &b[i]);

    printf("Merged Array:\n");

    for(i=0; i<n1; i++)
        printf("%d ", a[i]);

    for(i=0; i<n2; i++)
        printf("%d ", b[i]);

    return 0;
}