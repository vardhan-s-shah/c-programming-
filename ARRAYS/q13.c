#include <stdio.h>
int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5; 
    int pos ;
  printf("write position ");
  scanf("%d",&pos);
    int newNumber = 25;
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = newNumber;
    n++;
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
