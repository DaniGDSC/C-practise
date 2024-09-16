//using def function
#include <stdio.h>
int add(int a, int b) {
    return a + b;
    }
    int main() {
        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("The sum of the two numbers is: %d\n", add(num1, num2));
        return 0;
        }
