#include <stdio.h>  // Include the standard input-output library for printf and scanf
#include <math.h>   // Include the math library for sqrt and pow functions

// Define the complex function to calculate the magnitude of a complex number
double complex(int num1, int num2) {
    return sqrt(pow(num1, 2.0) + pow(num2, 2.0));  // Use double for pow function and ensure correct types are used
}

int main() {
    int a, b;
    printf("Enter 2 numbers: ");  // Prompt for input with newline character included
    scanf("%d %d", &a, &b);      // Read two integers from the user
    printf("The complex number is: %.2f\n", complex(a, b));  // Print the result of the function call
    return 0;
}
