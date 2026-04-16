#include <stdio.h>

int main() {
    float a, b;

    printf("Giai phuong trinh bac nhat ax + b = 0\n");
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        float x = -b / a;
        printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", x);
    }

    return 0;
}