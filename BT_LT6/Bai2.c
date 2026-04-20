#include <stdio.h>

long tinhTongDeQuy(int n) {
    if (n == 1) {
        return 1;
    }
    return n + tinhTongDeQuy(n - 1);
}

int main() {
    int n;

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Loi: Vui long nhap n > 0!\n");
    } else {
        long ketQua = tinhTongDeQuy(n);
        printf("Tong S = 1 + 2 + ... + %d tinh bang de quy la: %ld\n", n, ketQua);
    }

    return 0;
}