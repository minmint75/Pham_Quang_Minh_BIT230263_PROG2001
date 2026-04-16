#include <stdio.h>

int main() {
    int n = 1;

    do {
        if (n % 3 == 0 && n % 7 == 0) {
            break;
        }
        n++;
    } while (1);

    printf("So nguyen duong dau tien chia het cho ca 3 va 7 la: %d\n", n);

    return 0;
}