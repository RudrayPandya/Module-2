#include <stdio.h>

int main() {
    int i;

    // Part 1: Using break statement
    printf("=== Using break statement ===\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Stop the loop when i reaches 5
        }
        printf("%d ", i);
    }
    printf("\n");

    // Part 2: Using continue statement
    printf("\n=== Using continue statement ===\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;  // Skip printing when i is 3
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
