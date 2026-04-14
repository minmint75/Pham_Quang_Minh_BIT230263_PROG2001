#include <stdio.h>

int main() {
    int num;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 50) {
        printf("So %d nam trong khoang tu 10 den 50.\n", num);
    } 
    else {
        printf("So %d khong nam trong khoang tu 10 den 50.\n", num);
    }

    return 0;
}