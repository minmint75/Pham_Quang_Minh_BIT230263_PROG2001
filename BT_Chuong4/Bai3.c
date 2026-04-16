#include <stdio.h>

int main() {
    int day;

    printf("Nhap vao mot so (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Chu nhat\n");
            break;
        case 2:
            printf("Thu hai\n");
            break;
        case 3:
            printf("Thu ba\n");
            break;
        case 4:
            printf("Thu tu\n");
            break;
        case 5:
            printf("Thu nam\n");
            break;
        case 6:
            printf("Thu sau\n");
            break;
        case 7:
            printf("Thu bay\n");
            break;
        default:
            printf("Loi: Vui long chi nhap so tu 1 den 7!\n");
            break;
    }

    return 0;
}