#include <stdio.h>

void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int size = sizeof(a) / sizeof(int);

    printf("Cac phan tu trong mang: ");
    printArray(a, size);

    return 0;
}

