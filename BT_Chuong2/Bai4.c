#include <stdio.h>

int main() {
    float x;

    printf("Nhap vao gia tri x: ");
    scanf("%f", &x);

    x += 5;
    printf("Sau khi tang x them 5: %.2f\n", x);

    x -= 3;
    printf("Sau khi giam x di 3: %.2f\n", x);

    x *= 2;
    printf("Sau khi nhan x voi 2: %.2f\n", x);

    x /= 4;
    printf("Sau khi chia x cho 4: %.2f\n", x);

    return 0;
}