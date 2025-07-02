#include <stdio.h>
int main() {
    char x;
    printf("Enter the character: ");
    scanf("%c", &x);
    ( (x >= 97 && x <= 122) || (x >= 65 && x <=90 ) ) 
        ? printf("%c is an Alphabet\n", x): printf("%c is NOT an Alphabet\n", x);
    return 0;
}
