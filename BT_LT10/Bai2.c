#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(int);
    int b[5];
    FILE *f;

    f = fopen("array.bin", "wb");
    fwrite(a, sizeof(int), n, f);
    fclose(f);

    f = fopen("array.bin", "rb");
    fread(b, sizeof(int), n, f);
    fclose(f);

    printf("\n--- Kiem tra Bai 2 ---\n");
    int check = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
        if (a[i] != b[i]) check = 0;
    }
    if (check) printf("\nKet qua: CHINH XAC.\n");

    return 0;
}