#include <stdio.h>

int getB(int k, int n) {
    int counter;
    if (k == 1) {
        if (n == 1) {
            return 1;
        }
        else {
            return 2;
        }
    }
    else if (k > 1) {
        if (n == 1) {
            counter = getB(k-1, 0);
        }
        else {
            counter = getB(k-1, 0) + getB(k-1, 1);
        }
    }
    return counter;
}

int main(void) {
    int k;
    printf("Please provide a length k: ");
    scanf("%d", &k);
    printf("For k=%d B is: %d\n", k, getB(k, 2));
    return 0;
}

// k = 1:
// 1 0

// k = 2:
// 01 10 00

// k = 3:
// 010 101 001 100 000

// k = 4:
// 1010 0101 1001 1000 0001 0010 0100 0000
