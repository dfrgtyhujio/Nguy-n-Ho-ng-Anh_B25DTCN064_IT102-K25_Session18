#include <stdio.h>

void updateArray(int a[], int updateIndex, int newValue, int size) {
    if (updateIndex < 0 || updateIndex >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    a[updateIndex] = newValue;
}

int main() {
    int a[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(a) / sizeof(int);

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    updateArray(a, 2, 99, size);

    printf("\nMang sau khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

