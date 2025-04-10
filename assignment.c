#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int findLarger(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

void calculateSumAndProduct(int *a, int *b, int *sum, int *product) {
    *sum = *a + *b;
    *product = (*a) * (*b);
}

int main() {
    int num1, num2, sum, product;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\nBefore swapping: a = %d, b = %d\n", num1, num2);
    swapNumbers(&num1, &num2);
    printf("After swapping: a = %d, b = %d\n", num1, num2);
    
    printf("\nLarger number is: %d\n", findLarger(&num1, &num2));
    
    calculateSumAndProduct(&num1, &num2, &sum, &product);
    printf("Sum = %d, Product = %d\n", sum, product);
    
    return 0;
}
