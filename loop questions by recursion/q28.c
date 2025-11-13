#include <stdio.h>

int sum_factors(int num, int i) {
    if (i > num / 2)
        return 0;
    if (num % i == 0)
        return i + sum_factors(num, i + 1);
    return sum_factors(num, i + 1);
}

int main() {
    int num = 6;
    if (sum_factors(num, 1) == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is Not a Perfect Number\n", num);
    return 0;
}
