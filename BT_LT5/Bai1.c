#include<stdio.h>
#define PI 3.14159

// slide 15, 17, 19, 24, 26, 28, 30

// 15
int add (int a, int b) {
    return a + b;
}

// 17
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

//19
int findMax (int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if ( b > c) {
        return b;
    }
    else {
        return c;
    }
}

// 24
void printMessage() {
    printf("Hello, this is a message from a void function!\n");
}

//26
int tong(int a, int b) {
    return a + b;
}

// 28
float caculateArea(float radius) {
    return PI * radius * radius;
}

//30
void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    // 15
    int num1 = 5, num2 = 10;
    int sum = add(num1, num2);
    printf("--------------Slide 15---------------\n");
    printf("sum = %d\n", sum);

    //17
    int a=5, b=10;
    printf("--------------Slide 17---------------\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);

    // 19
    printf("--------------Slide 19---------------\n");
    int number1 = 12, number2 = 25, number3 = 18;
    int max = findMax(number1, number2, number3);
    printf("max = %d\n", max);

    //24
    printf("--------------Slide 24---------------\n");
    printMessage();

    // 26
    printf("--------------Slide 26---------------\n");
    int numb1 = 3, numb2 = 7;
    int result = tong(numb1, numb2);
    printf("sum = %d\n", result);

    // 28
    printf("--------------Slide 28---------------\n");
    float radius = 5.5;
    float area = caculateArea(radius);
    printf("area = %.2f\n", area);

    //30
    printf("--------------Slide 30---------------\n");
    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    modifyArray(numbers, size);
    printf("Modified array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}