#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int MAX_USERS = 100;

    const float TAX_RATE = 0.08f;

    const char* MESSAGE = "Chào mừng bạn đến với hệ thống!";
    printf("Số lượng người dùng tối đa: %d\n", MAX_USERS);
    printf("Thuế suất: %.2f (tương đương 8%%)\n", TAX_RATE);
    printf("Thông báo: %s\n", MESSAGE);

    return 0;
}