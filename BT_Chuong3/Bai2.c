#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main() {
    // slide 38
    char str1[] = "Hello ";
    char str2[] = "World";
    strcat(str1, str2);
    printf("%s\n", str1);

    // slide 39
    time_t current_time;
    time(&current_time);
    printf("Time is: %s\n", ctime(&current_time));

    // slide 40
    char c = 'a';
    if (isalpha(c)) {
        printf("'%c' is a letter.", c);
    }

    return 0;
}