#include <stdio.h>

int timKiem(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nNhap gia tri can tim kiem: ");
    scanf("%d", &key);

    int ketQua = timKiem(arr, n, key);

    if (ketQua != -1) {
        printf("Tim thay gia tri %d tai chi so (index): %d\n", key, ketQua);
    } else {
        printf("Khong tim thay gia tri %d trong mang.\n", key);
    }

    return 0;
}