#include <stdio.h>

// Define a structure to represent a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex num1, num2, sum;

    // Input the first complex number
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input the second complex number
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Call the function to add two complex numbers
    sum = addComplex(num1, num2);

    // Display the result
    printf("The sum of the complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
