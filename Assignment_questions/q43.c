#include <stdio.h>

int main() {
    int arr[100], size, n, i, j, first;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter how many times to left rotate: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        first = arr[0]; 
        
        
        for(j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        
        arr[size - 1] = first; 
    }

    printf("Array after left rotation: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}