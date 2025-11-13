#include <stdio.h>

void printA(int i, int j) {
    if (i > 5) return;
    if (i + j == 6) {
        printf("%d %d\n", i, j);
    }
    printA(i, j - 1);
}
                                                      //pattern A
void startA(int i) {
    if (i > 5) return;
    printA(i, 5);
    startA(i + 1);
}

int main() {
    startA(1);
    return 0;
}





#include <stdio.h>

void printB(int i, int j, int count) {
    if (count == 0) return;                              // pattern B
    printf("%d %d\n", i, j);
    printB(i, j, count - 1);
}

void startB(int i, int j) {
    if (i > 3) return;
    printB(i, j, 2);
    startB(i + 1, j - 1);
}

int main() {
    startB(1, 5);
    return 0;
}
