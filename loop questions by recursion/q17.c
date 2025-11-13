#include <stdio.h>

void countValues(int arr[], int index, int *pos, int *neg, int *zero) {
    if (index == 200) return;
    if (arr[index] > 0) (*pos)++;
    else if (arr[index] < 0) (*neg)++;
    else (*zero)++;
    countValues(arr, index + 1, pos, neg, zero);
}

int main() {
    int arr[200], i, pos = 0, neg = 0, zero = 0;
    for (i = 0; i < 200; i++)
        scanf("%d", &arr[i]);
    countValues(arr, 0, &pos, &neg, &zero);
    printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zero);
    return 0;
}
