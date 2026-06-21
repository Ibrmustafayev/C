#include <stdio.h>

int factorial(int n);
int fibonacci(int n);
int sumDigits(int n);
void printReverse(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial: %d\nFibonacci: %d\nSum of digits: %d\nReverse print: ", factorial(n), fibonacci(n), sumDigits(n));
    printReverse(n);

    return 0;
}

int factorial(int n) {
    if (n == 1) {
        return n;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {return n;}
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumDigits(int n) {
    if (n < 10) {return n;}
    return n % 10 + sumDigits(n / 10);
}

void printReverse(int n) {
    if (n == 0) {return;}
    printf("%d ", n);
    printReverse(n - 1);
}
