#include <stdio.h>
int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5;
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
