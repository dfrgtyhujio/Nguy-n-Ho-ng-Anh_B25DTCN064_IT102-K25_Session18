#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];
    int length = strlen(inputString);
    char *is = inputString;
    char *rs = reverseString + length - 1;

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0'; 

    for (int i = 0; i < length; i++) {
        *rs = *is;
        is++;
        rs--;
    }

    reverseString[length] = '\0';   

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi sau khi dao nguoc: %s\n", reverseString);

    return 0;
}

