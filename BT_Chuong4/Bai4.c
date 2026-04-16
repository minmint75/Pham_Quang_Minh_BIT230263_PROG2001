#include <stdio.h>

int main() {
    int n, i;
    long s = 0;

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Loi: Vui long nhap mot so nguyen duong (n > 0)!\n");
    } else {
        for (i = 1; i <= n; i++) {
            s = s + i;
        }

        printf("Tong S = 1 + 2 + ... + %d la: %ld\n", n, s);
    }

    return 0;
}