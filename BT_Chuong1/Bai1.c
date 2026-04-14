#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // Hàm printf() được sử dụng để xuất (in) dữ liệu ra màn hình console
    printf("Chào mừng bạn đến với lập trình C!\n");

    // Ký tự \n giúp xuống dòng tiếp theo
    printf("Bắt đầu hành trình của bạn ngay hôm nay.\n");

    return 0;
}   