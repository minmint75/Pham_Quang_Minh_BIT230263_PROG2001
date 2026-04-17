#include <stdio.h>

float* tinhTrungBinh(float *a, float *b, float *c) {
    static float tb; 
    
    tb = (*a + *b + *c) / 3;
    
    return &tb;
}

int main() {
    float x, y, z;
    float *ketQua;

    printf("Nhap ba so a, b, c: ");
    scanf("%f %f %f", &x, &y, &z);

    ketQua = tinhTrungBinh(&x, &y, &z);

    printf("Gia tri trung binh tai dia chi %p la: %.2f\n", (void*)ketQua, *ketQua);

    return 0;
}