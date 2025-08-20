#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Step 1: Create and open file for writing
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Step 2: Write string into file
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces
    fputs(str, fp);

    // Step 3: Close the file
    fclose(fp);

    // Step 4: Reopen file for reading
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Step 5: Read and display contents
    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    // Step 6: Close file
    fclose(fp);

    return 0;
}
