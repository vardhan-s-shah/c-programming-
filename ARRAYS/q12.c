#include <stdio.h>

int main() {
    int arr[50] = {2, 4, 6, 8, 10}; 
    int n = 5; 
    int add = 1; 
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = add;
    n++; 
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}