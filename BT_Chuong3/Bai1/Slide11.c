#include<stdio.h>

int globalVar = 100;

void display() {
    printf("Global Variable = %d\n", globalVar);
}

int main() {
    printf("Global variable: %d\n", globalVar);
    display();

    return 0;
}