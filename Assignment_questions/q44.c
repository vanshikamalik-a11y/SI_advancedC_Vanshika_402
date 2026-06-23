#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at index: %d\n", i);
            found = 1; 
                  break;     
        }
    }

    if(found == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}