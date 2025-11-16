#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a (dung &a): %p\n", &a);

    printf("Gia tri cua a (thong qua con tro *p): %d\n", *p);
    printf("Dia chi ma con tro p tro den: %p\n", p);

    return 0;
}

