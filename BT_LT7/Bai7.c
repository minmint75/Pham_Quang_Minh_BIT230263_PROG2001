#include <stdio.h>

int main() {
    int r, c;

    printf("Nhap so hang (r): ");
    scanf("%d", &r);
    printf("Nhap so cot (c): ");
    scanf("%d", &c);

    int a[r][c], trans[c][r];

    printf("\nNhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            trans[j][i] = a[i][j];
        }
    }

    printf("\nMa tran chuyen vi la:\n");
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}