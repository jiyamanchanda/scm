#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int is_armstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == original;
}

int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}



int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    if (is_armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    if (is_perfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}

#include <stdio.h>

float area(int r) {
    return 3.14 * r * r;
}

int circumference(int r) {
    return 2 * 3.14 * r;
}

int main() {
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Area: %.2f\n", area(r));
    printf("Circumference: %d\n", circumference(r));
    return 0;
}

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sum(num));
    return 0;
}

#include <stdio.h>

int count(char str[100]) {
    if (str[0] == '\0') return 0;
    if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' ||
        str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U') {
        return 1 + count(str + 1);
    }
    return count(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); 
    printf("Vowels: %d\n", count(str));
    return 0;
}


#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD: %d\n", gcd(num1, num2));
    return 0;
}