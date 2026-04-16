#include <stdio.h>

int main() {
    int a, b, c, min;

    printf("Nhap vao 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    printf("\nGia tri nho nhat trong 3 so [%d, %d, %d] la: %d\n", a, b, c, min);

    return 0;
}