#include<stdio.h>

int product(int a, int b, int c){
    return a*b*c;
}

int main(){
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Product of the given numbers is: %d\n", product(num1, num2, num3));
    return 0;
}
