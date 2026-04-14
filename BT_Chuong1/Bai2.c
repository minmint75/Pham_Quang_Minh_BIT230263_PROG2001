#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double pi = 3.14159;

    printf("Định dạng mặc định: %f\n", pi);

    printf("Lấy 1 chữ số thập phân: %.1f\n", pi);

    printf("Lấy 4 chữ số thập phân: %.4f\n", pi);

    return 0;
}