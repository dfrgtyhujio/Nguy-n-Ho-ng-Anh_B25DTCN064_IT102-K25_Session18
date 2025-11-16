#include <stdio.h>

int findElement(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(int);
    int value = 7;

    int findIndex = findElement(a, size, value);

    printf("Vi tri cua %d trong mang la: %d\n", value, findIndex);

    return 0;
}

