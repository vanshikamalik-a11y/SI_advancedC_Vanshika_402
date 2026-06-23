#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Saare elements ko jodne ka loop
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // (float) isliye lagaya taaki point mein sahi answer aaye
    average = (float)sum / n; 

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}