#include <stdio.h>
#include <string.h>
#define SIZE 10   // particulary define in question so...
int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int shifted[SIZE],n;
    char direction[6];
    printf("Enter number of pos to shift: ", SIZE);   
    scanf("%d", &n);
    printf("Enter direction: ");
    scanf("%s", direction);
    for (int i = 0; i < SIZE; i++) {
        shifted[i] = 0;
    }
    if (strcmp(direction, "left") == 0) {
        for (int i = 0; i < SIZE - n; i++) {
            shifted[i] = arr[i + n];
        }
    } else if (strcmp(direction, "right") == 0) {
        for (int i = SIZE - 1; i >= n; i--) {
            shifted[i] = arr[i - n];
        }
    } else {
        printf("Invalid direction!");
        return 1;
    }
    printf("Shifted array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", shifted[i]);
    }
    return 0;
}
