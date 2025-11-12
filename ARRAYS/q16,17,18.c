#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5; 
  int pos;                                    //write index number which you have to delete first , last 
  printf("write index number to delete");
  scanf("%d",&pos);

  
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

  
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
