#include <stdio.h>

int main() {
    int num = 10;        // A normal integer variable
    int *ptr;            // Pointer variable declaration

    ptr = &num;          // Assign address of num to pointer

    // Display original value
    printf("Original value of num: %d\n", num);

    // Modify value of num using pointer
    *ptr = 20;

    // Display modified value
    printf("Modified value of num using pointer: %d\n", num);

    // Also show address stored in pointer
    printf("Address of num (stored in ptr): %p\n", ptr);

    return 0;
}
