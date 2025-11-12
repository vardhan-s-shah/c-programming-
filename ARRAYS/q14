#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Initial array
    int n = 5; // Current size of the array
    int pos = 4;   // same as q13 but enter the last position 
    int newNumber = 25;

    // Check for valid position
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number
    arr[pos] = newNumber;
    n++; // Update size

    // Print updated array
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
