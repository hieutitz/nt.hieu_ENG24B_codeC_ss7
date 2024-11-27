#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int* array = (int*)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}

