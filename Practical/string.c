#include <stdio.h>
#include <string.h>  // Required for strcat() and strlen()

int main() {
    char str1[100], str2[100];  // Character arrays (strings)

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Display results
    printf("\nConcatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));

    return 0;
}
