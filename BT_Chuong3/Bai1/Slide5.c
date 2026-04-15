#include <stdio.h>

int main () {
    int x = 10;

    {
        int y = 20;
        printf("Inside outer block: x = %d, y = %d\n", x, y);

        {
            int z = 30;
            printf("Inside outer block: x = %d, y = %d z = %d\n", x, y, z);
        }
    }

    printf("Outside all block: x = %d", x);

    return 0;
}
