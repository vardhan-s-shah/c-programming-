#include <stdio.h>

int main() {
    int num, positive = 0, negative = 0, zero = 0;

    printf("Enter 200 integers:\n");

    for (int i = 0; i < 200; i++) {
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    printf("\nCount of Positive numbers: %d\n", positive);
    printf("Count of Negative numbers: %d\n", negative);
    printf("Count of Zeroes: %d\n", zero);

    return 0;
}