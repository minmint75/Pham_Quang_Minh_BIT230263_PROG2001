#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char x;
    int count = 0;

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("Nhap vao ky tu can dem: ");
    scanf("%c", &x);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == x) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", x, count);

    return 0;
}