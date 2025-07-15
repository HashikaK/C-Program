#include <stdio.h>
void checkPalindrome(int a) {
    int original = a;
    int rev = 0;

    while(a > 0) {
        int digit = a % 10;
        rev = rev * 10 + digit;
        a /= 10;
    }
    if(original == rev)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is not a Palindrome.\n", original);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkPalindrome(number);
    return 0;
}
