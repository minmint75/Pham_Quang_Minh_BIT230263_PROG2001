#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // 3 ví dụ về đặt tên biến hợp lệ

    int diem_thi = 10;
    float score2 = 8.5;
    char _heso = 'A';

    printf("Các biến hợp lệ: %d, %.1f, %c\n", diem_thi, score2, _heso);

    // 3 ví dụ về đặt tên biến không hợp lệ

    // int 2diem = 10;
    // Lý do: Tên biến không được phép bắt đầu bằng chữ số.

    // float diem thi = 8.5;
    // Lý do: Tên biến không được chứa khoảng trắng.

    // char char = 'S';
    // Lý do: Không được trùng với từ khóa (keywords) đã có sẵn của ngôn ngữ C.

    return 0;
}