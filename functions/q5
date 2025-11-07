#include <stdio.h>
void findMinMax(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];   }    }
}

int main() {
    int arr[] = {10, 5, 20, 2, 15, 8};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int maximum, minimum; // Variables to store the max and min values
    findMinMax(arr, n, &maximum, &minimum);

    printf("Maximum element: %d\n", maximum);
    printf("Minimum element: %d\n", minimum);
    return 0;
}
