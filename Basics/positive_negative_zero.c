#include <stdio.h>
int main() {
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  (num==0) ?printf("The number is zero") : (num>0)? printf("The number is positive"): printf("The number is negative");
  return 0;
}
