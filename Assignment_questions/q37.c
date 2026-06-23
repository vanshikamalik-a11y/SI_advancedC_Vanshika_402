#include <stdio.h>

int main() {
    int arr[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pehle element ko max aur min maan lo
    max = arr[0];
    min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Naya bada number mila
        }
        if(arr[i] < min) {
            min = arr[i]; // Naya chota number mila
        }
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}