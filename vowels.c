//Find the character is vowel or not using if else.

#include <stdio.h> 

int isCharacter(char data) {
    // Check if the character is in the range of ASCII values for A-Z or a-z
    if ((data >= 65 && data <= 90) || (data >= 97 && data <= 122)) {
        return 1;  
    } else {
        return 0;  
    }
}

int is_vowel(char character) {
    // Convert character to its ASCII code
    int ascii_code = (int) character;
    printf("The Character ASCII code is %d \n",ascii_code);
    
    // Check if the character is a vowel (both uppercase and lowercase)
    if (ascii_code == 65 || ascii_code == 69 || ascii_code == 73 || ascii_code == 79 || ascii_code == 85 ||
        ascii_code == 97 || ascii_code == 101 || ascii_code == 105 || ascii_code == 111 || ascii_code == 117) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char data;

    printf("Enter a character: ");
    scanf("%c", &data);

    if (isCharacter(data)) {
        printf("%c is a character.\n", data);
        if (is_vowel(data)) {
            printf("%c is a vowel.\n", data);
        } else {
            printf("%c is not a vowel.\n", data);
        }
    } 
    else {
        printf("%c is not a character.\n", data);
    }
    return 0;
}



