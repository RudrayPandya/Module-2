#include <stdio.h>

int main() {
    int i, j;

    // Part 1: One-dimensional array
    int arr[5];

    printf("=== One-Dimensional Array ===\n");
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Part 2: Two-dimensional array (3x3 matrix)
    int matrix[3][3], sum = 0;

    printf("=== Two-Dimensional Array (3x3 Matrix) ===\n");
    printf("Enter 9 integers (for 3x3 matrix):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add to sum while reading
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
