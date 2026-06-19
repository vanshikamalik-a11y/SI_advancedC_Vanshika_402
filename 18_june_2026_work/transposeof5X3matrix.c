#include <stdio.h>

int main()
{
    int a[5][3];
    int i, j;

    printf("Enter 15 elements of the 5x3 matrix:\n");

    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nTranspose of the matrix:\n");

    
    for(j = 0; j < 3; j++)
    {
        for(i = 0; i < 5; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}