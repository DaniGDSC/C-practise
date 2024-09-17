#include <stdio.h>  // Include the standard input-output library for printf and scanf

// Define the minus function correctly for subtraction

int minus(int a, int b) {

    return a + (~b + 1);  // Correctly implement the subtraction using two's complement arithmetic

}

int main() {

    int num1, num2;

    printf("Enter 2 numbers: ");  // Prompt for input with newline character included

    scanf("%d %d", &num1, &num2);  // Read two integers from the user

    printf("%d - %d = %d\n", num1, num2, minus(num1, num2));  // Print the result of subtraction

    return 0;

}

