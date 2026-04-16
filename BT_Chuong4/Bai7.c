#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap vao mot so trong khoang 1-100: ");
        scanf("%d", &n);

        if (n < 1 || n > 100) {
            printf("So ban nhap khong hop le.\n");
        }

    } while (n < 1 || n > 100);

    printf("Ban da nhap so: %d\n", n);

    return 0;
}