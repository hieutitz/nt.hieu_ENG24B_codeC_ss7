#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d (so le): ", i + 1);
        while (1) {
            scanf("%d", &array[i]);
            if (array[i] % 2 != 0) {
                break;
            } else {
                printf("Nhap sai! Vui long nhap so le: ");
            }
        }
    }
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

