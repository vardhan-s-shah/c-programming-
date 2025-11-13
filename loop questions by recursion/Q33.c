#include <stdio.h>
#include <math.h>

int main() {
    int num, square, digits, mod;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    digits = log10(num) + 1;
    mod = pow(10, digits);

    if (square % mod == num)
        printf("%d is an Automorphic number\n", num);
    else
        printf("%d is not an Automorphic number\n", num);

    return 0;
}
