#include <stdio.h>

int main() {
    int num, largest, smallest;

    printf("Enter 100 numbers:\n");

    
    scanf("%d", &num);
    largest = smallest = num;

    
    for (int i = 1; i < 100; i++) {
        scanf("%d", &num);

        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }

    printf("\nLargest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}