#include <stdio.h>

int timMax(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }
    
    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int x, y, z;

    printf("Nhap ba so nguyen (cach nhau boi dau cach): ");
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        printf("Loi: Du lieu nhap vao khong hop le!\n");
        return 1;
    }

    int giaTriMax = timMax(x, y, z);

    printf("Gia tri lon nhat trong 3 so %d, %d, %d la: %d\n", x, y, z, giaTriMax);

    return 0;
}