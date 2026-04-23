#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    Student s1 = {"Nguyen Van A", 20};
    Student s2;
    FILE *f;

    f = fopen("student.bin", "wb");
    fwrite(&s1, sizeof(Student), 1, f);
    fclose(f);

    f = fopen("student.bin", "rb");
    fread(&s2, sizeof(Student), 1, f);
    fclose(f);

    printf("--- Kiem tra Bai 1 ---\n");
    printf("Du lieu doc ra: Name: %s, Age: %d\n", s2.name, s2.age);
    if (strcmp(s1.name, s2.name) == 0 && s1.age == s2.age) {
        printf("Ket qua: DUNG voi gia tri ghi vao.\n");
    }

    return 0;
}