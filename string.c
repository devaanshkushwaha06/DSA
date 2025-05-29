#include <stdio.h>
#include <string.h>

// Function to compare two strings using pointers
int compareStrings(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0; // Strings are not equal
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char str1[100], str2[100];

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline character from the strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Compare the strings using the compareStrings function
    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
