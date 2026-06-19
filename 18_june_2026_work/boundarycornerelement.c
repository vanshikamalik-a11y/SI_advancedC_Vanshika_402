#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int diag = 0, boundary = 0, corner = 0;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(i = 0; i < 3; i++)
    {
        diag = diag + a[i][i];
    }

    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == 0 || i == 2 || j == 0 || j == 2)
                boundary = boundary + a[i][j];
        }
    }

    
    corner = a[0][0] + a[0][2] + a[2][0] + a[2][2];

    printf("Diagonal Sum = %d\n", diag);
    printf("Boundary Sum = %d\n", boundary);
    printf("Corner Sum = %d\n", corner);

    if(diag == boundary)
        printf("Diagonal sum is equal to Boundary sum\n");
    else
        printf("Diagonal sum is NOT equal to Boundary sum\n");

    if(diag == corner)
        printf("Diagonal sum is equal to Corner sum\n");
    else
        printf("Diagonal sum is NOT equal to Corner sum\n");

    return 0;
}