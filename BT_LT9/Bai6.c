#include <stdio.h>

int main() {
    FILE *f;
    int dai, rong;
    int temp;
    int count = 1;

    f = fopen("C:\\Test\\bai6.txt", "r");

    if (f == NULL) {
        printf("Khong tim thay file!");
        return 1;
    }

    while (!feof(f)) {
        if (fscanf(f, "%d", &temp) == 1) {
            printf("Doc duoc so: %d\n", temp);
        } else {
            char junk = fgetc(f);
            printf("(Bo qua ky tu: %c)\n", junk);
        }
    }

    rewind(f);

    fscanf(f, "%d %d", &dai, &rong);

    int dienTich = dai * rong;
    printf("Chieu dai: %d, Chieu rong: %d\n", dai, rong);
    printf("Dien tich hinh chu nhat la: %d\n", dienTich);

    fclose(f);

    return 0;
}