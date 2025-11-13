#include <stdio.h>

int isautomorphic(int num, int square) {
    if (num == 0) return 1;
    if (num % 10 != square % 10) return 0;
    return isautomorphic(num / 10, square / 10);
}

int main() {
    int num = 25;
    int square = num * num;
    if (isautomorphic(num, square))
        printf("%d is Automorphic\n", num);
    else
        printf("%d is Not Automorphic\n", num);
    return 0;
}
