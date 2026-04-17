#include <stdio.h>

long tinhTong(int n) {
    long tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    return tong;
}

int main() {
    int n;
    long ketQua;

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so lon hon 0!\n");
    } else {
        ketQua = tinhTong(n);

        printf("Tong cac so tu 1 den %d la: %ld\n", n, ketQua);
    }

    return 0;
}