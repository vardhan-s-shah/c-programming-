#include <stdio.h>

int armstrong(int num, int sum) {
    if (num == 0)
        return sum;
    int digit = num % 10;
    return armstrong(num / 10, sum + digit * digit * digit);
}

int main() {
    int num = 153;
    if (num == armstrong(num, 0))
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
