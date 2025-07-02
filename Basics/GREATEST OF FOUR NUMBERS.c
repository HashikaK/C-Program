#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    (num1 > num2 && num1 > num3 && num1 > num4) ? printf("%d is greatest\n", num1) :
    (num2 > num1 && num2 > num3 && num2 > num4) ? printf("%d is greatest\n", num2) :
    (num3 > num1 && num3 > num2 && num3 > num4) ? printf("%d is greatest\n", num3) :
    (num4 > num1 && num4 > num2 && num4 > num3) ? printf("%d is greatest\n", num4) :
    printf("There is a tie among the numbers.\n");

    return 0;
}
