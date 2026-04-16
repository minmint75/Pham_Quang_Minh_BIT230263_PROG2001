#include <stdio.h>

int main() {
    int n, so_dao_nguoc = 0, chu_so;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    int n_goc = n;

    while (n != 0) {
        chu_so = n % 10;
        so_dao_nguoc = so_dao_nguoc * 10 + chu_so;
        n = n / 10;
    }

    printf("So %d sau khi dao nguoc la: %d\n", n_goc, so_dao_nguoc);

    return 0;
}