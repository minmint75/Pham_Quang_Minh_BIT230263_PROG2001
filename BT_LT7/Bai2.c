#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Mang khong hop le!\n");
        return 1;
    }

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int indexMax = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            indexMax = i;
        }
    }

    printf("\nPhan tu lon nhat la: %d", max);
    printf("\nNam tai chi so (Index): %d\n", indexMax);

    return 0;
}