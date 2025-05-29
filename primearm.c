#include <stdio.h>
#include <math.h>

// Function to check for prime number (Call by Value)
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check for Armstrong number (Call by Value)
int isArmstrong(int num) {
    int original = num, sum = 0, n = 0, remainder;
    while (original != 0) {
        original /= 10;
        n++;
    }
    original = num;
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }
    return (num == sum);
}

// Function to check numbers (Call by Reference)
void checkNumbers(int num, int *primeResult, int *armstrongResult) {
    *primeResult = isPrime(num);
    *armstrongResult = isArmstrong(num);
}

int main() {
    int num, primeResult, armstrongResult;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nChecking number %d using Call by Value:\n", num);
    primeResult = isPrime(num);
    armstrongResult = isArmstrong(num);
    printf("Is Prime: %d\nIs Armstrong: %d\n", primeResult, armstrongResult);

    printf("\nChecking number %d using Call by Reference:\n", num);
    checkNumbers(num, &primeResult, &armstrongResult);
    printf("Is Prime: %d\nIs Armstrong: %d\n", primeResult, armstrongResult);

    return 0;
}
