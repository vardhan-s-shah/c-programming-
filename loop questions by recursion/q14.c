#include <stdio.h>

int sum(int arr[], int index) {
    if (index == 10) return 0;
    return arr[index] + sum(arr, index + 1);
}

int main() {
    int arr[10], i;
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    int total = sum(arr, 0);
    float mean = total / 10.0;
    printf("Sum = %d\nMean = %.2f\n", total, mean);
    return 0;
}
