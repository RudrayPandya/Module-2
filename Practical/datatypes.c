#include <stdio.h>

// This program demonstrates variables, constants, and comments in C

// Defining a constant
const float pie = 3.14159;

void main() {
    // 
    int age = 20;           
    char grade = 'A';       
    float height = 5.9;      
    
    // Displaying the values
    printf("=== Variables and Constants in C ===\n");
    printf("Age (int) : %d\n", age);
    printf("Grade (char) : %c\n", grade);
    printf("Height (float) : %.2f\n", height);
    printf("Constant PI : %.5f\n", pie);

}
