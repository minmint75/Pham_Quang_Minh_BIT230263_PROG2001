#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);
    int start = 0;
    int end = n - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Chuoi sau khi dao nguoc: %s\n", str);

    return 0;
}