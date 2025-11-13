#include <stdio.h>

int sum(int arr[], int index, int n) {
    if (index == n) return 0;
    return arr[index] + sum(arr, index + 1, n);
}

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int total = sum(arr, 0, n);
    float mean = total / (float)n;
    printf("Sum = %d\nMean = %.2f\n", total, mean);
    return 0;
}
