#include <stdio.h>
int main() {
    int array[5];
    int count = 0;
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Cac so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("Mang khong chua so chan.");
    }
    return 0;
}

