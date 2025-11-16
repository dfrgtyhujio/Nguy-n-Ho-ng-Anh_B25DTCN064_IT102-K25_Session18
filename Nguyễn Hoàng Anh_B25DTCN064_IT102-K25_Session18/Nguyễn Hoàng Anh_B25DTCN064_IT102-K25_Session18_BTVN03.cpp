#include <stdio.h>

void calculateSum(int *x, int *y, int *result) {
    *result = *x + *y;
}

int main() {
    int a = 7;
    int b = 3;
    int sum = 0;

    calculateSum(&a, &b, &sum);

    printf("Tong hai so %d va %d la: %d\n", a, b, sum);

    return 0;
}

