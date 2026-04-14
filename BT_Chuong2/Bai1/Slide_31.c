#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int a, b;

    printf("Nhập vào hai số để so sánh: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d lớn hơn %d\n", a, b);
    }
    else if (a < b) {
        printf("%d nhỏ hơn %d\n", a, b);
    }
    else {
        printf("%d bằng %d\n", a, b);
    }

    return 0;
}