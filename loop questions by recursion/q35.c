#include <stdio.h>

void printA(int i, int j) {
    if (i > 2) return;
    if (j > 3) {
        printA(i + 1, 1);
        return;                               // pattern A
    }
    printf("%d %d\n", i, j);
    printA(i, j + 1);
}

int main() {
    printA(1, 1);
    return 0;
}



 #include <stdio.h>

void printB(int i, int j) {
    if (i > 3) return;
    if (j > i) {
        printB(i + 1, 1);              // pattern B
        return;
    }
    printf("%d %d\n", i, j);
    printB(i, j + 1);
}

int main() {
    printB(1, 1);
    return 0;
}                  



#include <stdio.h>

void printC(int i, int j, int k) {
    if (i > 2) return;
    if (j > 2) {
        printC(i + 1, 1, 1);
        return;
    }
    if (k > 2) {                                         // pattern c       
        printC(i, j + 1, 1);
        return;
    }
    printf("%d %d %d\n", i, j, k);
    printC(i, j, k + 1);
}

int main() {
    printC(1, 1, 1);
    return 0;
}







#include <stdio.h>

void printD(int i, int j) {
    if (i < 3) return;
    if (j > 2) {
        printD(i - 1, 1);                       //pattern D
        return;
    }
    printf("%d %d\n", i, j);
    printD(i, j + 1);
}

int main() {
    printD(5, 1);
    return 0;
}
