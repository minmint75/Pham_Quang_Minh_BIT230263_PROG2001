#include <stdio.h>

int main() {
    int n, i;
    long tong = 0;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0!\n");
        return 1;
    }

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        tong += arr[i];
    }

    printf("\nTong cac phan tu trong mang la: %ld\n", tong);

    return 0;
}