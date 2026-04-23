#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f_nguon, *f_dich;
    char ch;

    f_nguon = fopen("C:\\Test\\file1.txt", "r");
    f_dich = fopen("C:\\Test\\ketqua_bai8.txt", "w");

    if (f_nguon == NULL) {
        printf("Loi: Khong tim thay file nguon.txt tren dia!\n");
        return 1;
    }
    if (f_dich == NULL) {
        printf("Loi: Khong the tao file dich!\n");
        fclose(f_nguon);
        return 1;
    }

    while ((ch = fgetc(f_nguon)) != EOF) {
        char chu_hoa = toupper(ch);
        fputc(chu_hoa, f_dich);
    }

    printf("Da sao chep va chuyen doi thanh chu hoa thanh cong!\n");

    fclose(f_nguon);
    fclose(f_dich);

    return 0;
}