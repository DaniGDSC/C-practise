#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2) {
        printf("num1 is equal to num2\n");
    } else if (num1 > num2) {
        printf("num1 is greater than num2\n");
    } else {
        printf("num2 is greater than num1\n");
    }
    return 0;
}