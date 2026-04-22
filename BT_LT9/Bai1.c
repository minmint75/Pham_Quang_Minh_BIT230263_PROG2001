#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;

    fptr1 = fopen("bai1_local.txt", "w");
    if (fptr1 != NULL) {
        printf("Da tao file bai1_local.txt trong thu muc code.\n");
        fclose(fptr1);
    }

    fptr2 = fopen("C:\\Test\\bai1_C.txt", "w");
    if (fptr2 != NULL) {
        printf("Da tao file bai1_C.txt trong o C.\n");
        fclose(fptr2);
    } else {
        printf("Khong the tao file o o C.\n");
    }

    return 0;
}