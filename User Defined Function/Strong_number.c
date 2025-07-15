#include <stdio.h>
// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
// Function to check if a number is strong
int isStrong(int num) {
    int original = num, sum = 0;

    while(num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return (sum == original);
}
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(isStrong(number))
        printf("%d is a Strong Number.\n", number);
    else
        printf("%d is not a Strong Number.\n", number);

    return 0;
}
