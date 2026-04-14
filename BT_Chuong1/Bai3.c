#include <stdbool.h>
#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int soNguyen = 25;
    float soThuc = 7.5;
    char kýTu = 'A';
    bool logic = true;

    printf("%d, %.1f, %c, %d\n", soNguyen, soThuc, kýTu, logic);

    return 0;
}