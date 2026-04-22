#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char text[100];

    fptr = fopen("data.txt", "w");
    if (fptr == NULL) return 1;

    printf("Nhap vao mot doan text bat ky: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fptr, "%s", text);
    fclose(fptr);
    printf("Da ghi du lieu vao file data.txt thanh cong.\n");

    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Khong tim thay file de doc!\n");
        return 1;
    }

    printf("\nNoi dung doc duoc tu file la: ");
    while (fgets(text, sizeof(text), fptr)) {
        printf("%s", text);
    }

    fclose(fptr);
    return 0;
}