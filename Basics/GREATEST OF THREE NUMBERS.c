#include <stdio.h>
int main() {
  int num, num1, num2;
  printf("Enter three integer: ");
  scanf("%d %d %d", &num, &num1, &num2);
    (num > num1 && num > num2) ? printf("%d is greatest\n", num) :
    (num1 > num && num1 > num2) ? printf("%d is greatest\n", num1) :
    (num2 > num && num2 > num1) ? printf("%d is greatest\n", num2) :
    printf("There is a tie among the numbers.\n");
  return 0;
}
