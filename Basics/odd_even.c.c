#include <stdio.h>
int main() {
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  (num%2==0) ?printf("The number is even") : printf("The number is odd");
  return 0;
}
