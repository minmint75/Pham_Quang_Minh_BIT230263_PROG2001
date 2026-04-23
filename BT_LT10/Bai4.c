#include <stdio.h>

int main() {
    FILE *f;
    int value_to_write = 999;
    int value_to_read;

    f = fopen("random_access.bin", "wb+");
    
    fseek(f, 20, SEEK_SET);
    fwrite(&value_to_write, sizeof(int), 1, f);

    fseek(f, 20, SEEK_SET);
    fread(&value_to_read, sizeof(int), 1, f);

    long pos = ftell(f);

    printf("\n--- Kiem tra Bai 4 ---\n");
    printf("Gia tri tai vi tri 20: %d\n", value_to_read);
    if (value_to_write == value_to_read) printf("Ket qua: DUNG.\n");
    
    printf("Vi tri con tro hien tai sau khi doc: %ld\n", pos);

    fclose(f);
    return 0;
}