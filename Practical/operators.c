#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n=== Arithmetic Operations ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);  // Integer division
        printf("%d %% %d = %d\n", a, b, a % b); // Modulus
    } else {
        printf("Division and modulus not possible (b = 0)\n");
    }

    // Relational Operations
    printf("\n=== Relational Operations ===\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d < %d : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);

    // Logical Operations
    printf("\n=== Logical Operations ===\n");
    printf("(%d && %d) : %d\n", a, b, (a && b)); // Logical AND
    printf("(%d || %d) : %d\n", a, b, (a || b)); // Logical OR
    printf("!%d : %d\n", a, !a);                 // Logical NOT
    printf("!%d : %d\n", b, !b);                 // Logical NOT

    return 0;
}
