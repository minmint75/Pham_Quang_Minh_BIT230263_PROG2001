#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("data.txt", "r");
    FILE *fout = fopen("ketqua_bai4.txt", "w");
    char ch;
    int count = 0;

    if (fin == NULL || fout == NULL) return 1;

    while ((ch = fgetc(fin)) != EOF) {
        if (isalpha(ch)) {
            count++;
        }
    }

    fprintf(fout, "So luong ky tu chu cai la: %d", count);
    
    fclose(fin);
    fclose(fout);
    printf("Da dem xong, ket qua luu tai ketqua_bai4.txt\n");
    return 0;
}