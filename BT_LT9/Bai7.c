#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("C:\\Test\\file1.txt", "a");
    f2 = fopen("C:\\Test\\file2.txt", "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Loi: Khong the mo tap tin!\n");
        return 1;
    }

    fputc('\n', f1);

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f1);
    }

    printf("Da ghep noi dung file2.txt vao sau file1.txt thanh cong.\n");

    fclose(f1);
    fclose(f2);

    return 0;
}