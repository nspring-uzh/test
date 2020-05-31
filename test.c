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
