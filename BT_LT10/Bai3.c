#include <stdio.h>

typedef struct {
    char name[50];
    double price;
} Product;

int main() {
    Product list[] = {{"Laptop", 1500.5}, {"Mouse", 25.0}, {"Keyboard", 50.0}};
    int n = 3;
    Product read_list[3];
    FILE *f;

    f = fopen("products.bin", "wb");
    fwrite(list, sizeof(Product), n, f);
    fclose(f);

    f = fopen("products.bin", "rb");
    fread(read_list, sizeof(Product), n, f);
    fclose(f);

    printf("\n--- Kiem tra Bai 3 ---\n");
    for (int i = 0; i < n; i++) {
        printf("SP %d: %s - %.2f\n", i+1, read_list[i].name, read_list[i].price);
    }
    return 0;
}