#include <stdio.h>

int main() {
    int n, value;
    float sum = 0, mean;

    
    

    printf("Enter %d values:\n", n);
    for (int i = 0; i < 10; i++) {
        scanf("%d", &value);
        sum += value;
    }

    mean = sum / n;

    printf("\nSum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}