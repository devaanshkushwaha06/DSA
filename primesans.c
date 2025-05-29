#include <stdio.h>
#include <math.h>

// Function prototypes
int isPrime(int num);  // Call by Value
void isPrimeByReference(int num, int *result); // Call by Reference
int isArmstrong(int num);  // Call by Value
void isArmstrongByReference(int num, int *result); // Call by Reference

int main() {
    int number;
    int result = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call by Value for Prime check
    if (isPrime(number)) {
        printf("%d is a prime number (using Call by Value).\n", number);
    } else {
        printf("%d is not a prime number (using Call by Value).\n", number);
    }

    // Call by Reference for Prime check
    isPrimeByReference(number, &result);
    if (result) {
        printf("%d is a prime number (using Call by Reference).\n", number);
    } else {
        printf("%d is not a prime number (using Call by Reference).\n", number);
    }

    // Call by Value for Armstrong check
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number (using Call by Value).\n", number);
    } else {
        printf("%d is not an Armstrong number (using Call by Value).\n", number);
    }

    // Call by Reference for Armstrong check
    isArmstrongByReference(number, &result);
    if (result) {
        printf("%d is an Armstrong number (using Call by Reference).\n", number);
    } else {
        printf("%d is not an Armstrong number (using Call by Reference).\n", number);
    }

    return 0;
}

// Function to check if a number is prime (Call by Value)
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

// Function to check if a number is prime (Call by Reference)
void isPrimeByReference(int num, int *result) {
    if (num <= 1) {
        *result = 0;  // Not prime
        return;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            *result = 0;  // Not prime
            return;
        }
    }
    *result = 1;  // Prime
}

// Function to check if a number is Armstrong (Call by Value)
int isArmstrong(int num) {
    int originalNum = num, remainder, result = 0, digits = 0;

    // Calculate number of digits in the number
    while (num != 0) {
        num /= 10;
        digits++;
    }

    num = originalNum;  // Reset num

    // Check if Armstrong number
    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, digits);
        num /= 10;
    }

    return (result == originalNum);
}

// Function to check if a number is Armstrong (Call by Reference)
void isArmstrongByReference(int num, int *result) {
    int originalNum = num, remainder, sum = 0, digits = 0;

    // Calculate number of digits in the number
    while (num != 0) {
        num /= 10;
        digits++;
    }

    num = originalNum;  // Reset num

    // Check if Armstrong number
    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }

    *result = (sum == originalNum);
    return 0;
}