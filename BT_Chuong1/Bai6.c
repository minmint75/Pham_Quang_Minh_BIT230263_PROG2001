#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int soNguyen;
    float soThuc;
    char kyTu;
    int tempBool;
    bool logic;

    printf("Nhập một số nguyên: ");
    scanf("%i", &soNguyen);

    printf("Nhập một số thực: ");
    scanf("%f", &soThuc);

    while(getchar() != '\n');

    printf("Nhập một ký tự: ");
    scanf("%c", &kyTu);

    printf("Nhập giá trị logic (1 - đúng, 0 - sai): ");
    scanf("%d", &tempBool);
    logic = tempBool;

    printf("\nKết quả: %d, %.2f, %c, %s\n",
           soNguyen,
           soThuc,
           kyTu,
           logic ? "true" : "false");

    return 0;
}